/****************************************************************************
** Meta object code from reading C++ file 'popup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Kiosk/popup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'popup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_popup_t {
    QByteArrayData data[13];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_popup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_popup_t qt_meta_stringdata_popup = {
    {
QT_MOC_LITERAL(0, 0, 5), // "popup"
QT_MOC_LITERAL(1, 6, 9), // "sendValue"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(4, 39, 5), // "value"
QT_MOC_LITERAL(5, 45, 20), // "on_setbutton_clicked"
QT_MOC_LITERAL(6, 66, 23), // "on_singlebutton_clicked"
QT_MOC_LITERAL(7, 90, 22), // "on_rightbutton_clicked"
QT_MOC_LITERAL(8, 113, 25), // "on_rollbackbutton_clicked"
QT_MOC_LITERAL(9, 139, 19), // "on_okbutton_clicked"
QT_MOC_LITERAL(10, 159, 22), // "on_minusButton_clicked"
QT_MOC_LITERAL(11, 182, 21), // "on_plusButton_clicked"
QT_MOC_LITERAL(12, 204, 22) // "on_ordercancel_clicked"

    },
    "popup\0sendValue\0\0QMap<QString,QString>\0"
    "value\0on_setbutton_clicked\0"
    "on_singlebutton_clicked\0on_rightbutton_clicked\0"
    "on_rollbackbutton_clicked\0on_okbutton_clicked\0"
    "on_minusButton_clicked\0on_plusButton_clicked\0"
    "on_ordercancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_popup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
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

void popup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        popup *_t = static_cast<popup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendValue((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 1: _t->on_setbutton_clicked(); break;
        case 2: _t->on_singlebutton_clicked(); break;
        case 3: _t->on_rightbutton_clicked(); break;
        case 4: _t->on_rollbackbutton_clicked(); break;
        case 5: _t->on_okbutton_clicked(); break;
        case 6: _t->on_minusButton_clicked(); break;
        case 7: _t->on_plusButton_clicked(); break;
        case 8: _t->on_ordercancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (popup::*)(QMap<QString,QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&popup::sendValue)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject popup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_popup.data,
      qt_meta_data_popup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *popup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *popup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_popup.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int popup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void popup::sendValue(QMap<QString,QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
