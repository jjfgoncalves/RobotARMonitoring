/****************************************************************************
** Meta object code from reading C++ file 'camera_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "camera_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Camera_widget_t {
    QByteArrayData data[20];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_widget_t qt_meta_stringdata_Camera_widget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Camera_widget"
QT_MOC_LITERAL(1, 14, 9), // "setCamera"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "QCameraInfo"
QT_MOC_LITERAL(4, 37, 10), // "cameraInfo"
QT_MOC_LITERAL(5, 48, 18), // "updateCameraDevice"
QT_MOC_LITERAL(6, 67, 8), // "QAction*"
QT_MOC_LITERAL(7, 76, 6), // "action"
QT_MOC_LITERAL(8, 83, 17), // "updateCaptureMode"
QT_MOC_LITERAL(9, 101, 20), // "processCapturedImage"
QT_MOC_LITERAL(10, 122, 9), // "requestId"
QT_MOC_LITERAL(11, 132, 3), // "img"
QT_MOC_LITERAL(12, 136, 10), // "imageSaved"
QT_MOC_LITERAL(13, 147, 2), // "id"
QT_MOC_LITERAL(14, 150, 8), // "fileName"
QT_MOC_LITERAL(15, 159, 19), // "displayCaptureError"
QT_MOC_LITERAL(16, 179, 26), // "QCameraImageCapture::Error"
QT_MOC_LITERAL(17, 206, 5), // "error"
QT_MOC_LITERAL(18, 212, 11), // "errorString"
QT_MOC_LITERAL(19, 224, 23) // "on_CaptureImage_clicked"

    },
    "Camera_widget\0setCamera\0\0QCameraInfo\0"
    "cameraInfo\0updateCameraDevice\0QAction*\0"
    "action\0updateCaptureMode\0processCapturedImage\0"
    "requestId\0img\0imageSaved\0id\0fileName\0"
    "displayCaptureError\0QCameraImageCapture::Error\0"
    "error\0errorString\0on_CaptureImage_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera_widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    2,   56,    2, 0x08 /* Private */,
      12,    2,   61,    2, 0x08 /* Private */,
      15,    3,   66,    2, 0x08 /* Private */,
      19,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   13,   14,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 16, QMetaType::QString,   13,   17,   18,
    QMetaType::Void,

       0        // eod
};

void Camera_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Camera_widget *_t = static_cast<Camera_widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCamera((*reinterpret_cast< const QCameraInfo(*)>(_a[1]))); break;
        case 1: _t->updateCameraDevice((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->updateCaptureMode(); break;
        case 3: _t->processCapturedImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 4: _t->imageSaved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->displayCaptureError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QCameraImageCapture::Error(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->on_CaptureImage_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCameraImageCapture::Error >(); break;
            }
            break;
        }
    }
}

const QMetaObject Camera_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Camera_widget.data,
      qt_meta_data_Camera_widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Camera_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Camera_widget.stringdata0))
        return static_cast<void*>(const_cast< Camera_widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Camera_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
