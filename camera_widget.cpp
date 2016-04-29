#include "camera_widget.h"
#include "ui_camera_widget.h"

Camera_widget::Camera_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Camera_widget),
    _mCamera(0),
    _mImageCapture(0),
    _mIsCapturingImage(false),
    _mApplicationExiting(false)
{
    ui->setupUi(this);

    //Camera devices:

    /*QActionGroup *videoDevicesGroup = new QActionGroup(this);
    videoDevicesGroup->setExclusive(true);
    foreach (const QCameraInfo &cameraInfo, QCameraInfo::availableCameras()) {
        QAction *videoDeviceAction = new QAction(cameraInfo.description(), videoDevicesGroup);
        videoDeviceAction->setCheckable(true);
        videoDeviceAction->setData(QVariant::fromValue(cameraInfo));
        if (cameraInfo == QCameraInfo::defaultCamera())
            videoDeviceAction->setChecked(true);

        ui->selectCamera->addAction(videoDeviceAction);
    }*/

    //OptionsCamera Button
    //Create multi Action for button
    QAction *_mTurnOn = new QAction("Turn On",this);
    QAction * _mTurnOff = new QAction("Turn Off",this);
    //Add Action to Button
    QMenu * _mMenuBtn = new QMenu("Options Camera",this);
    _mMenuBtn->addActions({_mTurnOn,_mTurnOff});
    ui->OptionsCamera->setMenu(_mMenuBtn);

    //connect(videoDevicesGroup, SIGNAL(triggered(QAction*)),this, SLOT(updateCameraDevice(QAction*)));

    setCamera(QCameraInfo::defaultCamera());

}

Camera_widget::~Camera_widget()
{
    delete _mImageCapture;
    delete _mCamera;
    delete ui;
}


void Camera_widget::setCamera(const QCameraInfo &cameraInfo)
{
    delete _mImageCapture;
    delete _mCamera;

    _mCamera = new QCamera(cameraInfo);

    //connect(_mCamera, SIGNAL(stateChanged(QCamera::State)), this, SLOT(updateCameraState(QCamera::State)));
    //connect(_mCamera, SIGNAL(error(QCamera::Error)), this, SLOT(displayCameraError()));


    _mImageCapture = new QCameraImageCapture(_mCamera);

    _mCamera->setViewfinder(ui->showCamera);

    //updateCameraState(camera->state());
    //updateLockStatus(camera->lockStatus(), QCamera::UserRequest);
    //updateRecorderState(mediaRecorder->state());

    //connect(_mImageCapture, SIGNAL(readyForCaptureChanged(bool)), this, SLOT(readyForCapture(bool)));
    connect(_mImageCapture, SIGNAL(imageCaptured(int,QImage)), this, SLOT(processCapturedImage(int,QImage)));
    connect(_mImageCapture, SIGNAL(imageSaved(int,QString)), this, SLOT(imageSaved(int,QString)));
    connect(_mImageCapture, SIGNAL(error(int,QCameraImageCapture::Error,QString)), this,SLOT(displayCaptureError(int,QCameraImageCapture::Error,QString)));

    //connect(_mCamera, SIGNAL(lockStatusChanged(QCamera::LockStatus,QCamera::LockChangeReason)),this, SLOT(updateLockStatus(QCamera::LockStatus,QCamera::LockChangeReason)));

    //ui->captureWidget->setTabEnabled(0, (camera->isCaptureModeSupported(QCamera::CaptureStillImage)));
    //ui->captureWidget->setTabEnabled(1, (camera->isCaptureModeSupported(QCamera::CaptureVideo)));

    updateCaptureMode();
    _mCamera->start();
}

void Camera_widget::updateCameraDevice(QAction *action)
{
    //setCamera(qvariant_cast<QCameraInfo>(action->data()));
}

void Camera_widget::updateCaptureMode()
{
    QCamera::CaptureModes captureMode = QCamera::CaptureStillImage;

    if (_mCamera->isCaptureModeSupported(captureMode))
        _mCamera->setCaptureMode(captureMode);
}

void Camera_widget::processCapturedImage(int requestId, const QImage& img)
{
    Q_UNUSED(requestId);
    QImage scaledImage = img.scaled(ui->showCamera->size(),
                                    Qt::KeepAspectRatio,
                                    Qt::SmoothTransformation);

    ui->imageViewer->setPixmap(QPixmap::fromImage(scaledImage));
}
void Camera_widget::imageSaved(int id, const QString &fileName)
{
    Q_UNUSED(id);
    Q_UNUSED(fileName);

    _mIsCapturingImage = false;
    if (_mApplicationExiting)
        close();
}
void Camera_widget::displayCaptureError(int id, const QCameraImageCapture::Error error, const QString &errorString)
{
    Q_UNUSED(id);
    Q_UNUSED(error);
    QMessageBox::warning(this, tr("Image Capture Error"), errorString);

}

void Camera_widget::on_CaptureImage_clicked()
{
    _mIsCapturingImage = true;
    _mImageCapture->capture();
}
