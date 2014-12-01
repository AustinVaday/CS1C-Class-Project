/****************************************************************************
** Meta object code from reading C++ file 'newactivatedlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CS1C-Project-Master/newactivatedlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newactivatedlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NewActivatedList_t {
    QByteArrayData data[10];
    char stringdata[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewActivatedList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewActivatedList_t qt_meta_stringdata_NewActivatedList = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 19),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 13),
QT_MOC_LITERAL(4, 52, 4),
QT_MOC_LITERAL(5, 57, 19),
QT_MOC_LITERAL(6, 77, 16),
QT_MOC_LITERAL(7, 94, 4),
QT_MOC_LITERAL(8, 99, 18),
QT_MOC_LITERAL(9, 118, 22)
    },
    "NewActivatedList\0customerListChanged\0"
    "\0CustomerList*\0list\0on_listItem_clicked\0"
    "QListWidgetItem*\0item\0updateCustomerList\0"
    "on_addCustomer_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewActivatedList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x0a /* Public */,
       8,    1,   40,    2, 0x0a /* Public */,
       9,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void NewActivatedList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewActivatedList *_t = static_cast<NewActivatedList *>(_o);
        switch (_id) {
        case 0: _t->customerListChanged((*reinterpret_cast< CustomerList*(*)>(_a[1]))); break;
        case 1: _t->on_listItem_clicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->updateCustomerList((*reinterpret_cast< CustomerList*(*)>(_a[1]))); break;
        case 3: _t->on_addCustomer_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NewActivatedList::*_t)(CustomerList * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NewActivatedList::customerListChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject NewActivatedList::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewActivatedList.data,
      qt_meta_data_NewActivatedList,  qt_static_metacall, 0, 0}
};


const QMetaObject *NewActivatedList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewActivatedList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewActivatedList.stringdata))
        return static_cast<void*>(const_cast< NewActivatedList*>(this));
    return QDialog::qt_metacast(_clname);
}

int NewActivatedList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void NewActivatedList::customerListChanged(CustomerList * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
