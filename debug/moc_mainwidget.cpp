/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget_t {
<<<<<<< HEAD:release/moc_mainwidget.cpp
    QByteArrayData data[19];
    char stringdata0[251];
=======
    QByteArrayData data[16];
    char stringdata0[185];
>>>>>>> parent of ddc776c... First release:debug/moc_mainwidget.cpp
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget_t qt_meta_stringdata_MainWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWidget"
QT_MOC_LITERAL(1, 11, 20), // "ButtonCaptureClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "ButtonStartStopClicked"
QT_MOC_LITERAL(4, 56, 21), // "ButtonSettingsClicked"
QT_MOC_LITERAL(5, 78, 17), // "ButtonDrawClicked"
<<<<<<< HEAD:release/moc_mainwidget.cpp
QT_MOC_LITERAL(6, 96, 17), // "ButtonLoadClicked"
QT_MOC_LITERAL(7, 114, 23), // "cancelDrawButtonClicked"
QT_MOC_LITERAL(8, 138, 23), // "processPendingDatagrams"
QT_MOC_LITERAL(9, 162, 15), // "SettingsApplied"
QT_MOC_LITERAL(10, 178, 14), // "SettingsStruct"
QT_MOC_LITERAL(11, 193, 8), // "settings"
QT_MOC_LITERAL(12, 202, 10), // "FrameReady"
QT_MOC_LITERAL(13, 213, 8), // "cv::Mat*"
QT_MOC_LITERAL(14, 222, 5), // "frame"
QT_MOC_LITERAL(15, 228, 4), // "orig"
QT_MOC_LITERAL(16, 233, 6), // "Update"
QT_MOC_LITERAL(17, 240, 4), // "int*"
QT_MOC_LITERAL(18, 245, 5) // "Error"
=======
QT_MOC_LITERAL(6, 96, 15), // "SettingsApplied"
QT_MOC_LITERAL(7, 112, 14), // "SettingsStruct"
QT_MOC_LITERAL(8, 127, 8), // "settings"
QT_MOC_LITERAL(9, 136, 10), // "FrameReady"
QT_MOC_LITERAL(10, 147, 8), // "cv::Mat*"
QT_MOC_LITERAL(11, 156, 5), // "frame"
QT_MOC_LITERAL(12, 162, 4), // "orig"
QT_MOC_LITERAL(13, 167, 6), // "Update"
QT_MOC_LITERAL(14, 174, 4), // "int*"
QT_MOC_LITERAL(15, 179, 5) // "Error"
>>>>>>> parent of ddc776c... First release:debug/moc_mainwidget.cpp

    },
    "MainWidget\0ButtonCaptureClicked\0\0"
    "ButtonStartStopClicked\0ButtonSettingsClicked\0"
<<<<<<< HEAD:release/moc_mainwidget.cpp
    "ButtonDrawClicked\0ButtonLoadClicked\0"
    "cancelDrawButtonClicked\0processPendingDatagrams\0"
    "SettingsApplied\0SettingsStruct\0settings\0"
    "FrameReady\0cv::Mat*\0frame\0orig\0Update\0"
    "int*\0Error"
=======
    "ButtonDrawClicked\0SettingsApplied\0"
    "SettingsStruct\0settings\0FrameReady\0"
    "cv::Mat*\0frame\0orig\0Update\0int*\0Error"
>>>>>>> parent of ddc776c... First release:debug/moc_mainwidget.cpp
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
<<<<<<< HEAD:release/moc_mainwidget.cpp
      11,   14, // methods
=======
       8,   14, // methods
>>>>>>> parent of ddc776c... First release:debug/moc_mainwidget.cpp
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
<<<<<<< HEAD:release/moc_mainwidget.cpp
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      12,    2,   79,    2, 0x08 /* Private */,
      16,    5,   84,    2, 0x08 /* Private */,
      18,    0,   95,    2, 0x08 /* Private */,
=======
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       9,    2,   61,    2, 0x08 /* Private */,
      13,    5,   66,    2, 0x08 /* Private */,
      15,    0,   77,    2, 0x08 /* Private */,
>>>>>>> parent of ddc776c... First release:debug/moc_mainwidget.cpp

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
<<<<<<< HEAD:release/moc_mainwidget.cpp
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   14,   15,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17, 0x80000000 | 17, 0x80000000 | 17, 0x80000000 | 17,    2,    2,    2,    2,    2,
=======
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14,    2,    2,    2,    2,    2,
>>>>>>> parent of ddc776c... First release:debug/moc_mainwidget.cpp
    QMetaType::Void,

       0        // eod
};

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWidget *_t = static_cast<MainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ButtonCaptureClicked(); break;
        case 1: _t->ButtonStartStopClicked(); break;
        case 2: _t->ButtonSettingsClicked(); break;
        case 3: _t->ButtonDrawClicked(); break;
<<<<<<< HEAD:release/moc_mainwidget.cpp
        case 4: _t->ButtonLoadClicked(); break;
        case 5: _t->cancelDrawButtonClicked(); break;
        case 6: _t->processPendingDatagrams(); break;
        case 7: _t->SettingsApplied((*reinterpret_cast< SettingsStruct(*)>(_a[1]))); break;
        case 8: _t->FrameReady((*reinterpret_cast< cv::Mat*(*)>(_a[1])),(*reinterpret_cast< cv::Mat*(*)>(_a[2]))); break;
        case 9: _t->Update((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5]))); break;
        case 10: _t->Error(); break;
=======
        case 4: _t->SettingsApplied((*reinterpret_cast< SettingsStruct(*)>(_a[1]))); break;
        case 5: _t->FrameReady((*reinterpret_cast< cv::Mat*(*)>(_a[1])),(*reinterpret_cast< cv::Mat*(*)>(_a[2]))); break;
        case 6: _t->Update((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5]))); break;
        case 7: _t->Error(); break;
>>>>>>> parent of ddc776c... First release:debug/moc_mainwidget.cpp
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWidget.data,
      qt_meta_data_MainWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
<<<<<<< HEAD:release/moc_mainwidget.cpp
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
=======
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
>>>>>>> parent of ddc776c... First release:debug/moc_mainwidget.cpp
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
