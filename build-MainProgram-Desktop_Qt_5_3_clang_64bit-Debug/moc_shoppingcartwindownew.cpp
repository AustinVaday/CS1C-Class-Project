/****************************************************************************
** Meta object code from reading C++ file 'shoppingcartwindownew.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CS1C-Project-Master/shoppingcartwindownew.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shoppingcartwindownew.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShoppingCartWindowNew_t {
    QByteArrayData data[8];
    char stringdata[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShoppingCartWindowNew_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShoppingCartWindowNew_t qt_meta_stringdata_ShoppingCartWindowNew = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 28),
QT_MOC_LITERAL(2, 51, 0),
QT_MOC_LITERAL(3, 52, 12),
QT_MOC_LITERAL(4, 65, 16),
QT_MOC_LITERAL(5, 82, 24),
QT_MOC_LITERAL(6, 107, 26),
QT_MOC_LITERAL(7, 134, 22)
    },
    "ShoppingCartWindowNew\0"
    "signal_updated_shopping_list\0\0"
    "ProductList&\0ShoppingCartList\0"
    "on_remove_button_clicked\0"
    "on_checkout_button_clicked\0"
    "on_back_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShoppingCartWindowNew[] = {

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
       5,    0,   37,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ShoppingCartWindowNew::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShoppingCartWindowNew *_t = static_cast<ShoppingCartWindowNew *>(_o);
        switch (_id) {
        case 0: _t->signal_updated_shopping_list((*reinterpret_cast< ProductList(*)>(_a[1]))); break;
        case 1: _t->on_remove_button_clicked(); break;
        case 2: _t->on_checkout_button_clicked(); break;
        case 3: _t->on_back_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ShoppingCartWindowNew::*_t)(ProductList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShoppingCartWindowNew::signal_updated_shopping_list)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ShoppingCartWindowNew::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ShoppingCartWindowNew.data,
      qt_meta_data_ShoppingCartWindowNew,  qt_static_metacall, 0, 0}
};


const QMetaObject *ShoppingCartWindowNew::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShoppingCartWindowNew::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShoppingCartWindowNew.stringdata))
        return static_cast<void*>(const_cast< ShoppingCartWindowNew*>(this));
    return QWidget::qt_metacast(_clname);
}

int ShoppingCartWindowNew::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ShoppingCartWindowNew::signal_updated_shopping_list(ProductList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
