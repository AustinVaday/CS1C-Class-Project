/****************************************************************************
** Meta object code from reading C++ file 'MainProgramWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CS1C-Project-Master/MainProgramWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainProgramWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainProgramWindow_t {
    QByteArrayData data[17];
    char stringdata[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainProgramWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainProgramWindow_t qt_meta_stringdata_MainProgramWindow = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 7),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 26),
QT_MOC_LITERAL(4, 54, 22),
QT_MOC_LITERAL(5, 77, 18),
QT_MOC_LITERAL(6, 96, 13),
QT_MOC_LITERAL(7, 110, 4),
QT_MOC_LITERAL(8, 115, 27),
QT_MOC_LITERAL(9, 143, 21),
QT_MOC_LITERAL(10, 165, 23),
QT_MOC_LITERAL(11, 189, 27),
QT_MOC_LITERAL(12, 217, 37),
QT_MOC_LITERAL(13, 255, 28),
QT_MOC_LITERAL(14, 284, 21),
QT_MOC_LITERAL(15, 306, 18),
QT_MOC_LITERAL(16, 325, 29)
    },
    "MainProgramWindow\0clicked\0\0"
    "on_pushButton_Help_clicked\0"
    "on_exitProgram_clicked\0updateCustomerList\0"
    "CustomerList*\0list\0on_pushButton_Login_clicked\0"
    "on_pushButton_clicked\0on_actionHelp_triggered\0"
    "on_pushButton_Guest_clicked\0"
    "on_pushButton_RequestBrochure_clicked\0"
    "on_actionContactUS_triggered\0"
    "updateCustomerReviews\0newCustomerReviews\0"
    "on_pushButton_Login_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainProgramWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    1,   86,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,

       0        // eod
};

void MainProgramWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainProgramWindow *_t = static_cast<MainProgramWindow *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->on_pushButton_Help_clicked(); break;
        case 2: _t->on_exitProgram_clicked(); break;
        case 3: _t->updateCustomerList((*reinterpret_cast< CustomerList*(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_Login_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_actionHelp_triggered(); break;
        case 7: _t->on_pushButton_Guest_clicked(); break;
        case 8: _t->on_pushButton_RequestBrochure_clicked(); break;
        case 9: _t->on_actionContactUS_triggered(); break;
        case 10: _t->updateCustomerReviews((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_Login_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainProgramWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainProgramWindow::clicked)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MainProgramWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainProgramWindow.data,
      qt_meta_data_MainProgramWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainProgramWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainProgramWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainProgramWindow.stringdata))
        return static_cast<void*>(const_cast< MainProgramWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainProgramWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainProgramWindow::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
