/****************************************************************************
** Meta object code from reading C++ file 'customeraddressbook.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CS1C-Project-Master/customeraddressbook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customeraddressbook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CustomerAddressBook_t {
    QByteArrayData data[9];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomerAddressBook_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomerAddressBook_t qt_meta_stringdata_CustomerAddressBook = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CustomerAddressBook"
QT_MOC_LITERAL(1, 20, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "on_submitButton_clicked"
QT_MOC_LITERAL(4, 66, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(5, 90, 29), // "on_nextCustomerButton_clicked"
QT_MOC_LITERAL(6, 120, 29), // "on_prevCustomerButton_clicked"
QT_MOC_LITERAL(7, 150, 21), // "on_editButton_clicked"
QT_MOC_LITERAL(8, 172, 23) // "on_removeButton_clicked"

    },
    "CustomerAddressBook\0on_addButton_clicked\0"
    "\0on_submitButton_clicked\0"
    "on_cancelButton_clicked\0"
    "on_nextCustomerButton_clicked\0"
    "on_prevCustomerButton_clicked\0"
    "on_editButton_clicked\0on_removeButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomerAddressBook[] = {

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
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CustomerAddressBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomerAddressBook *_t = static_cast<CustomerAddressBook *>(_o);
        switch (_id) {
        case 0: _t->on_addButton_clicked(); break;
        case 1: _t->on_submitButton_clicked(); break;
        case 2: _t->on_cancelButton_clicked(); break;
        case 3: _t->on_nextCustomerButton_clicked(); break;
        case 4: _t->on_prevCustomerButton_clicked(); break;
        case 5: _t->on_editButton_clicked(); break;
        case 6: _t->on_removeButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CustomerAddressBook::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CustomerAddressBook.data,
      qt_meta_data_CustomerAddressBook,  qt_static_metacall, 0, 0}
};


const QMetaObject *CustomerAddressBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomerAddressBook::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CustomerAddressBook.stringdata))
        return static_cast<void*>(const_cast< CustomerAddressBook*>(this));
    return QWidget::qt_metacast(_clname);
}

int CustomerAddressBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
