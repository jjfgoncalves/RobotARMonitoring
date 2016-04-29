#include "mainwindow.h"
#include <QApplication>

#include<camera_widget.h>

int main(int argc, char *argv[])
{
    //Create a QApplication Object
    //Is necessary to run any program's that uses QT widgets
    QApplication app(argc, argv);
    app.setStyle("fusion");

    //Create a MainWindows Object
    //MainWindow w;

    Camera_widget w;


    //show the Mainwindows on the screen
    w.show();

    //Make a Qapplication enter its event loop
    return app.exec();
}
