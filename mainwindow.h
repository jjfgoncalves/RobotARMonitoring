#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include<QCameraViewfinder>
#include <QTimer>
#include "camera.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    // A QObject adds several abilities to a normal C++ class.
    Q_OBJECT


//Public Variables/Functions
public:

    // declare a constructor that has a default argument called parent. The value 0 indicates that the widget has no parent (it is a top-level widget).
    explicit MainWindow(QWidget *parent = 0);
    //declare a virtual Destructor
    ~MainWindow();
    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    QCameraViewfinder* getCameraViewer();
    void getStart();


//Private variables
private:
    //declare a member variable which is a pointer to the MainWindows UI class to access all this methods.
    Ui::MainWindow *ui;
    //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXxx
    Camera *_camObj;
};

#endif // MAINWINDOW_H
