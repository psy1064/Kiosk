/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Kiosk/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "setValue"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(4, 43, 14), // "setPhoneNumber"
QT_MOC_LITERAL(5, 58, 6), // "number"
QT_MOC_LITERAL(6, 65, 11), // "countupdate"
QT_MOC_LITERAL(7, 77, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 99, 26), // "on_showkakaobutton_clicked"
QT_MOC_LITERAL(9, 126, 23), // "on_returnbutton_clicked"
QT_MOC_LITERAL(10, 150, 12), // "deleteBasket"
QT_MOC_LITERAL(11, 163, 7), // "basket*"
QT_MOC_LITERAL(12, 171, 3), // "tmp"
QT_MOC_LITERAL(13, 175, 33), // "on_mid_hambugerpushbutton_cli..."
QT_MOC_LITERAL(14, 209, 29), // "on_mid_sidepushbutton_clicked"
QT_MOC_LITERAL(15, 239, 33), // "on_mid_beveragepushbutton_cli..."
QT_MOC_LITERAL(16, 273, 23) // "on_finishButton_clicked"

    },
    "MainWindow\0setValue\0\0QMap<QString,QString>\0"
    "setPhoneNumber\0number\0countupdate\0"
    "on_pushButton_clicked\0on_showkakaobutton_clicked\0"
    "on_returnbutton_clicked\0deleteBasket\0"
    "basket*\0tmp\0on_mid_hambugerpushbutton_clicked\0"
    "on_mid_sidepushbutton_clicked\0"
    "on_mid_beveragepushbutton_clicked\0"
    "on_finishButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       6,    0,   75,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 1: _t->setPhoneNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->countupdate(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_showkakaobutton_clicked(); break;
        case 5: _t->on_returnbutton_clicked(); break;
        case 6: _t->deleteBasket((*reinterpret_cast< basket*(*)>(_a[1]))); break;
        case 7: _t->on_mid_hambugerpushbutton_clicked(); break;
        case 8: _t->on_mid_sidepushbutton_clicked(); break;
        case 9: _t->on_mid_beveragepushbutton_clicked(); break;
        case 10: _t->on_finishButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< basket* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
