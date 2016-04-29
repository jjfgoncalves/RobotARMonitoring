#-------------------------------------------------
#
# Project created by QtCreator 2016-04-14T11:17:04
#
#-------------------------------------------------

QT       += core gui multimedia widgets multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4):

TARGET = RobotARMonitoring
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    camera_widget.cpp

HEADERS  += mainwindow.h \
    camera_widget.h

FORMS    += mainwindow.ui \
    camera_widget.ui

INSTALLS += target

