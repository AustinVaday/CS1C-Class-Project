/****************************************************************************
** Meta object code from reading C++ file 'ViewProducts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CS1C-Project-Master/ViewProducts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewProducts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewProducts_t {
    QByteArrayData data[13];
    char stringdata[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewProducts_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewProducts_t qt_meta_stringdata_ViewProducts = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 28),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 12),
QT_MOC_LITERAL(4, 56, 11),
QT_MOC_LITERAL(5, 68, 24),
QT_MOC_LITERAL(6, 93, 11),
QT_MOC_LITERAL(7, 105, 20),
QT_MOC_LITERAL(8, 126, 22),
QT_MOC_LITERAL(9, 149, 22),
QT_MOC_LITERAL(10, 172, 24),
QT_MOC_LITERAL(11, 197, 26),
QT_MOC_LITERAL(12, 224, 21)
    },
    "ViewProducts\0signal_updated_shopping_list\0"
    "\0ProductList&\0ProductList\0"
    "on_updated_shopping_list\0updatedList\0"
    "on_MaintPlan_clicked\0on_product_One_clicked\0"
    "on_product_Two_clicked\0on_product_Three_clicked\0"
    "on_checkout_button_clicked\0"
    "on_backButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewProducts[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ViewProducts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewProducts *_t = static_cast<ViewProducts *>(_o);
        switch (_id) {
        case 0: _t->signal_updated_shopping_list((*reinterpret_cast< ProductList(*)>(_a[1]))); break;
        case 1: _t->on_updated_shopping_list((*reinterpret_cast< ProductList(*)>(_a[1]))); break;
        case 2: _t->on_MaintPlan_clicked(); break;
        case 3: _t->on_product_One_clicked(); break;
        case 4: _t->on_product_Two_clicked(); break;
        case 5: _t->on_product_Three_clicked(); break;
        case 6: _t->on_checkout_button_clicked(); break;
        case 7: _t->on_backButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ViewProducts::*_t)(ProductList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewProducts::signal_updated_shopping_list)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ViewProducts::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ViewProducts.data,
      qt_meta_data_ViewProducts,  qt_static_metacall, 0, 0}
};


const QMetaObject *ViewProducts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewProducts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewProducts.stringdata))
        return static_cast<void*>(const_cast< ViewProducts*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ViewProducts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ViewProducts::signal_updated_shopping_list(ProductList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
