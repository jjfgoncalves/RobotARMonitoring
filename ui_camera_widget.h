/********************************************************************************
** Form generated from reading UI file 'camera_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_WIDGET_H
#define UI_CAMERA_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_Camera_widget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *selectCamera;
    QPushButton *OptionsCamera;
    QPushButton *CaptureImage;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QCameraViewfinder *showCamera;
    QLabel *imageViewer;
    QFrame *line;

    void setupUi(QWidget *Camera_widget)
    {
        if (Camera_widget->objectName().isEmpty())
            Camera_widget->setObjectName(QStringLiteral("Camera_widget"));
        Camera_widget->resize(1452, 663);
        horizontalLayoutWidget = new QWidget(Camera_widget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 1431, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        selectCamera = new QPushButton(horizontalLayoutWidget);
        selectCamera->setObjectName(QStringLiteral("selectCamera"));

        horizontalLayout->addWidget(selectCamera);

        OptionsCamera = new QPushButton(horizontalLayoutWidget);
        OptionsCamera->setObjectName(QStringLiteral("OptionsCamera"));

        horizontalLayout->addWidget(OptionsCamera);

        CaptureImage = new QPushButton(horizontalLayoutWidget);
        CaptureImage->setObjectName(QStringLiteral("CaptureImage"));

        horizontalLayout->addWidget(CaptureImage);

        horizontalLayoutWidget_2 = new QWidget(Camera_widget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 59, 1431, 601));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        showCamera = new QCameraViewfinder(horizontalLayoutWidget_2);
        showCamera->setObjectName(QStringLiteral("showCamera"));
        showCamera->setMaximumSize(QSize(712, 599));

        horizontalLayout_3->addWidget(showCamera);

        imageViewer = new QLabel(horizontalLayoutWidget_2);
        imageViewer->setObjectName(QStringLiteral("imageViewer"));

        horizontalLayout_3->addWidget(imageViewer);

        line = new QFrame(Camera_widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 40, 1431, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(Camera_widget);

        QMetaObject::connectSlotsByName(Camera_widget);
    } // setupUi

    void retranslateUi(QWidget *Camera_widget)
    {
        Camera_widget->setWindowTitle(QApplication::translate("Camera_widget", "Form", 0));
        selectCamera->setText(QApplication::translate("Camera_widget", "SelectCamera", 0));
        OptionsCamera->setText(QApplication::translate("Camera_widget", "OptionsCamera", 0));
        CaptureImage->setText(QApplication::translate("Camera_widget", "Capture", 0));
        imageViewer->setText(QApplication::translate("Camera_widget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Camera_widget: public Ui_Camera_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_WIDGET_H
