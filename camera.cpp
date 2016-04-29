#include "camera.h"


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <QDebug>

/*****************************************************************************
* Camera
*/

Camera::Camera(QWidget *parent) : QObject(parent)
{

}
void Camera::enableCamera()
{
    if(checkCameraAvailability()){
        _camera = new QCamera();
        _camera->setCaptureMode(QCamera::CaptureStillImage);


        // Image capturer
        _stillImageCapture = new QCameraImageCapture(_camera);

        // Start camera
        if (_camera->state() == QCamera::ActiveState) {
            _camera->stop();
        }

        _camera->setViewfinder(vwFind);

        _camera->start();
     }//else TODO

}

void Camera::captureImage()
{

        if (_stillImageCapture->isReadyForCapture()) {
            _imageName = QString("camera.jpg");
            _stillImageCapture->capture(_imageName);
        }

}
bool Camera::checkCameraAvailability()
{

    if (QCameraInfo::availableCameras().count() > 0)
        return true;
    else
        return false;
}



