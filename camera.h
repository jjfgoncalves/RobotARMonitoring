#ifndef CAMERA_H
#define CAMERA_H

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 #include <QObject>
 #include <QCamera>
 #include <QCameraInfo>
 #include <QCameraImageCapture>
#include <QCameraViewfinder>
#include <QDesktopServices>

 /*****************************************************************************
 * Camera
 */
//Define a Camera Class
class Camera : public QObject
{
    // A QObject adds several abilities to a normal C++ class.
    Q_OBJECT

    //Public Variables/Functions
 public:

        // declare a constructor that has a default argument called parent. The value 0 indicates that the widget has no parent (it is a top-level widget).
    Camera(QWidget *parent = 0);
    bool checkCameraAvailability();

 public slots:
     void enableCamera(QCameraViewfinder* vwFind);
     void captureImage();

 private:
     QCamera*                _camera;
     QCameraImageCapture*    _stillImageCapture;

     QImage                  _capturedImage;
     QString                 _imageName;

 };

 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




























/*
#include <QCameraInfo>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>

//Define a Camera Class
class Camera
{
//Public Variables/Functions
public:
    bool checkCameraAvailability();
    void showCamera(QCameraViewfinder*);


//Private Variables//Functions
private:
    QCamera * _camera;
    QCameraImageCapture *_imageCapture ;
};
*/
#endif // CAMERA_H
