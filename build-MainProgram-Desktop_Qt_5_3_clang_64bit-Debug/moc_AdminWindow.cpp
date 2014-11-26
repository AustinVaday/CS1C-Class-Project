/****************************************************************************
** Meta object code from reading C++ file 'AdminWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CS1C-Project-Master/AdminWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdminWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdminWindow_t {
    QByteArrayData data[15];
    char stringdata[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminWindow_t qt_meta_stringdata_AdminWindow = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 7),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 11),
QT_MOC_LITERAL(4, 33, 19),
QT_MOC_LITERAL(5, 53, 13),
QT_MOC_LITERAL(6, 67, 4),
QT_MOC_LITERAL(7, 72, 30),
QT_MOC_LITERAL(8, 103, 18),
QT_MOC_LITERAL(9, 122, 32),
QT_MOC_LITERAL(10, 155, 4),
QT_MOC_LITERAL(11, 160, 22),
QT_MOC_LITERAL(12, 183, 35),
QT_MOC_LITERAL(13, 219, 23),
QT_MOC_LITERAL(14, 243, 26)
    },
    "AdminWindow\0clicked\0\0adminAccess\0"
    "customerListChanged\0CustomerList*\0"
    "list\0on_modify_help_options_clicked\0"
    "updateCustomerList\0on_user_name_label_linkActivated\0"
    "link\0on_back_button_clicked\0"
    "on_view_activated_customers_clicked\0"
    "on_actionHelp_triggered\0"
    "on_search_customer_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x0a /* Public */,
       8,    1,   70,    2, 0x0a /* Public */,
       9,    1,   73,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminWindow *_t = static_cast<AdminWindow *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->adminAccess(); break;
        case 2: _t->customerListChanged((*reinterpret_cast< CustomerList*(*)>(_a[1]))); break;
        case 3: _t->on_modify_help_options_clicked(); break;
        case 4: _t->updateCustomerList((*reinterpret_cast< CustomerList*(*)>(_a[1]))); break;
        case 5: _t->on_user_name_label_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_back_button_clicked(); break;
        case 7: _t->on_view_activated_customers_clicked(); break;
        case 8: _t->on_actionHelp_triggered(); break;
        case 9: _t->on_search_customer_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AdminWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdminWindow::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (AdminWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdminWindow::adminAccess)) {
                *result = 1;
            }
        }
        {
            typedef void (AdminWindow::*_t)(CustomerList * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdminWindow::customerListChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject AdminWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AdminWindow.data,
      qt_meta_data_AdminWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *AdminWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdminWindow.stringdata))
        return static_cast<void*>(const_cast< AdminWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AdminWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void AdminWindow::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AdminWindow::adminAccess()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void AdminWindow::customerListChanged(CustomerList * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
