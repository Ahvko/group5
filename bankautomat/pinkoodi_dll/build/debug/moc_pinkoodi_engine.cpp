/****************************************************************************
** Meta object code from reading C++ file 'pinkoodi_engine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../pinkoodi_engine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pinkoodi_engine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pinkoodi_engine_t {
    QByteArrayData data[14];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pinkoodi_engine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pinkoodi_engine_t qt_meta_stringdata_pinkoodi_engine = {
    {
QT_MOC_LITERAL(0, 0, 15), // "pinkoodi_engine"
QT_MOC_LITERAL(1, 16, 13), // "on_a1_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "on_a2_clicked"
QT_MOC_LITERAL(4, 45, 13), // "on_a3_clicked"
QT_MOC_LITERAL(5, 59, 13), // "on_a4_clicked"
QT_MOC_LITERAL(6, 73, 13), // "on_a5_clicked"
QT_MOC_LITERAL(7, 87, 13), // "on_a6_clicked"
QT_MOC_LITERAL(8, 101, 13), // "on_a7_clicked"
QT_MOC_LITERAL(9, 115, 13), // "on_a8_clicked"
QT_MOC_LITERAL(10, 129, 13), // "on_a9_clicked"
QT_MOC_LITERAL(11, 143, 13), // "on_a0_clicked"
QT_MOC_LITERAL(12, 157, 16), // "on_clear_clicked"
QT_MOC_LITERAL(13, 174, 16) // "on_enter_clicked"

    },
    "pinkoodi_engine\0on_a1_clicked\0\0"
    "on_a2_clicked\0on_a3_clicked\0on_a4_clicked\0"
    "on_a5_clicked\0on_a6_clicked\0on_a7_clicked\0"
    "on_a8_clicked\0on_a9_clicked\0on_a0_clicked\0"
    "on_clear_clicked\0on_enter_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pinkoodi_engine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pinkoodi_engine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<pinkoodi_engine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_a1_clicked(); break;
        case 1: _t->on_a2_clicked(); break;
        case 2: _t->on_a3_clicked(); break;
        case 3: _t->on_a4_clicked(); break;
        case 4: _t->on_a5_clicked(); break;
        case 5: _t->on_a6_clicked(); break;
        case 6: _t->on_a7_clicked(); break;
        case 7: _t->on_a8_clicked(); break;
        case 8: _t->on_a9_clicked(); break;
        case 9: _t->on_a0_clicked(); break;
        case 10: _t->on_clear_clicked(); break;
        case 11: _t->on_enter_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject pinkoodi_engine::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_pinkoodi_engine.data,
    qt_meta_data_pinkoodi_engine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *pinkoodi_engine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pinkoodi_engine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pinkoodi_engine.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pinkoodi_engine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
