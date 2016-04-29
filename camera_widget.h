#ifndef CAMERA_WIDGET_H
#define CAMERA_WIDGET_H

//Includes used in .h
#include <QWidget>

#include <QCamera>
#include <QCameraImageCapture>
//Includes used in .cpp
#include <QCameraViewfinder>
#include <QCameraInfo>
#include <QMenu>
#include <QMessageBox>



namespace Ui {
class Camera_widget;
}




class Camera_widget : public QWidget
{
    Q_OBJECT

public:
    Camera_widget(QWidget *parent = 0);
    ~Camera_widget();

private slots:
    void setCamera(const QCameraInfo &cameraInfo);

    void updateCameraDevice(QAction *action);
    void updateCaptureMode();

    void processCapturedImage(int requestId, const QImage& img);
    void imageSaved(int id, const QString &fileName);
    void displayCaptureError(int id, const QCameraImageCapture::Error error, const QString &errorString);

    void on_CaptureImage_clicked();

private:
    Ui::Camera_widget *ui;
    //Camera
    QCamera *_mCamera;
    QCameraImageCapture *_mImageCapture;
    QImageEncoderSettings _mImageSettings;
    bool _mIsCapturingImage;
    bool _mApplicationExiting;

};

#endif // CAMERA_WIDGET_H
