#include "mainwindow.h"


//Defines the MainWindow constructor       //calls the QMainWindow constructor, which is the base class  //creates the UI class instance and assigns it to the ui member
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow)
{
    //sets up the UI
    ui->setupUi(this);

}
//Defines the MainWindow destructor
MainWindow::~MainWindow()
{
    //delete the UI
    delete ui;
}

// Get Camera Viewer
QCameraViewfinder* MainWindow::getCameraViewer(){
    return ui->ShowCamera1;
}

// Get start Main Windows with your widgets
void MainWindow::getStart(){


}
