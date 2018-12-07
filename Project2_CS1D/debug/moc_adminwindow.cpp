/****************************************************************************
** Meta object code from reading C++ file 'adminwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../adminwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminWindow_t {
    QByteArrayData data[17];
    char stringdata0[477];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminWindow_t qt_meta_stringdata_AdminWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AdminWindow"
QT_MOC_LITERAL(1, 12, 33), // "on_pushButton_adminLogout_cli..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 26), // "on_tableView_Teams_clicked"
QT_MOC_LITERAL(4, 74, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 86, 5), // "index"
QT_MOC_LITERAL(6, 92, 31), // "on_tableView_Souveniers_clicked"
QT_MOC_LITERAL(7, 124, 33), // "on_pushButton_addSouvenir_cli..."
QT_MOC_LITERAL(8, 158, 36), // "on_pushButton_updateSouvenir_..."
QT_MOC_LITERAL(9, 195, 36), // "on_pushButton_deleteSouvenir_..."
QT_MOC_LITERAL(10, 232, 37), // "on_pushButton_submitAddUpdate..."
QT_MOC_LITERAL(11, 270, 37), // "on_pushButton_cancelAddUpdate..."
QT_MOC_LITERAL(12, 308, 39), // "on_pushButton_updateStadiumIn..."
QT_MOC_LITERAL(13, 348, 39), // "on_pushButton_cancelAddUpdate..."
QT_MOC_LITERAL(14, 388, 41), // "on_pushButton_submitUpdateSta..."
QT_MOC_LITERAL(15, 430, 37), // "on_pushButton_AddDataFromFile..."
QT_MOC_LITERAL(16, 468, 8) // "setFonts"

    },
    "AdminWindow\0on_pushButton_adminLogout_clicked\0"
    "\0on_tableView_Teams_clicked\0QModelIndex\0"
    "index\0on_tableView_Souveniers_clicked\0"
    "on_pushButton_addSouvenir_clicked\0"
    "on_pushButton_updateSouvenir_clicked\0"
    "on_pushButton_deleteSouvenir_clicked\0"
    "on_pushButton_submitAddUpdate_clicked\0"
    "on_pushButton_cancelAddUpdate_clicked\0"
    "on_pushButton_updateStadiumInfo_clicked\0"
    "on_pushButton_cancelAddUpdate_2_clicked\0"
    "on_pushButton_submitUpdateStadium_clicked\0"
    "on_pushButton_AddDataFromFile_clicked\0"
    "setFonts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    1,   80,    2, 0x08 /* Private */,
       6,    1,   83,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
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

void AdminWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminWindow *_t = static_cast<AdminWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_adminLogout_clicked(); break;
        case 1: _t->on_tableView_Teams_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_tableView_Souveniers_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_addSouvenir_clicked(); break;
        case 4: _t->on_pushButton_updateSouvenir_clicked(); break;
        case 5: _t->on_pushButton_deleteSouvenir_clicked(); break;
        case 6: _t->on_pushButton_submitAddUpdate_clicked(); break;
        case 7: _t->on_pushButton_cancelAddUpdate_clicked(); break;
        case 8: _t->on_pushButton_updateStadiumInfo_clicked(); break;
        case 9: _t->on_pushButton_cancelAddUpdate_2_clicked(); break;
        case 10: _t->on_pushButton_submitUpdateStadium_clicked(); break;
        case 11: _t->on_pushButton_AddDataFromFile_clicked(); break;
        case 12: _t->setFonts(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdminWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AdminWindow.data,
      qt_meta_data_AdminWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AdminWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
