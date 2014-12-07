/****************************************************************************
** Meta object code from reading C++ file 'guestwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CS1C-Project-Master/guestwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guestwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GuestWindow_t {
    QByteArrayData data[6];
    char stringdata[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuestWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuestWindow_t qt_meta_stringdata_GuestWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GuestWindow"
QT_MOC_LITERAL(1, 12, 26), // "on_guaranteeButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "on_sellButton_clicked"
QT_MOC_LITERAL(4, 62, 23), // "on_EnviroButton_clicked"
QT_MOC_LITERAL(5, 86, 21) // "on_ConceptOps_clicked"

    },
    "GuestWindow\0on_guaranteeButton_clicked\0"
    "\0on_sellButton_clicked\0on_EnviroButton_clicked\0"
    "on_ConceptOps_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuestWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GuestWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GuestWindow *_t = static_cast<GuestWindow *>(_o);
        switch (_id) {
        case 0: _t->on_guaranteeButton_clicked(); break;
        case 1: _t->on_sellButton_clicked(); break;
        case 2: _t->on_EnviroButton_clicked(); break;
        case 3: _t->on_ConceptOps_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GuestWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GuestWindow.data,
      qt_meta_data_GuestWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *GuestWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuestWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GuestWindow.stringdata))
        return static_cast<void*>(const_cast< GuestWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GuestWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
