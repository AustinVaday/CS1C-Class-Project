/****************************************************************************
** Meta object code from reading C++ file 'BrochureWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CS1C-Project-Master/BrochureWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BrochureWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BrochureWindow_t {
    QByteArrayData data[11];
    char stringdata[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrochureWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrochureWindow_t qt_meta_stringdata_BrochureWindow = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 7),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 12),
QT_MOC_LITERAL(4, 37, 24),
QT_MOC_LITERAL(5, 62, 12),
QT_MOC_LITERAL(6, 75, 16),
QT_MOC_LITERAL(7, 92, 23),
QT_MOC_LITERAL(8, 116, 30),
QT_MOC_LITERAL(9, 147, 24),
QT_MOC_LITERAL(10, 172, 27)
    },
    "BrochureWindow\0clicked\0\0viewProducts\0"
    "on_updated_shopping_list\0ProductList&\0"
    "ShoppingCartList\0on_actionHELP_triggered\0"
    "on_button_viewProducts_clicked\0"
    "on_button_logout_clicked\0"
    "on_viewTestimonials_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrochureWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   51,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BrochureWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BrochureWindow *_t = static_cast<BrochureWindow *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->viewProducts(); break;
        case 2: _t->on_updated_shopping_list((*reinterpret_cast< ProductList(*)>(_a[1]))); break;
        case 3: _t->on_actionHELP_triggered(); break;
        case 4: _t->on_button_viewProducts_clicked(); break;
        case 5: _t->on_button_logout_clicked(); break;
        case 6: _t->on_viewTestimonials_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BrochureWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BrochureWindow::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (BrochureWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BrochureWindow::viewProducts)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject BrochureWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BrochureWindow.data,
      qt_meta_data_BrochureWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *BrochureWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrochureWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BrochureWindow.stringdata))
        return static_cast<void*>(const_cast< BrochureWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BrochureWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void BrochureWindow::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void BrochureWindow::viewProducts()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
