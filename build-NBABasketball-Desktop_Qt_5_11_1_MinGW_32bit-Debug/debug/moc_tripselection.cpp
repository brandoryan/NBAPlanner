/****************************************************************************
** Meta object code from reading C++ file 'tripselection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NBABasketball/tripselection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tripselection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tripSelection_t {
    QByteArrayData data[8];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tripSelection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tripSelection_t qt_meta_stringdata_tripSelection = {
    {
QT_MOC_LITERAL(0, 0, 13), // "tripSelection"
QT_MOC_LITERAL(1, 14, 17), // "BackButtonClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(4, 54, 23), // "on_removeButton_clicked"
QT_MOC_LITERAL(5, 78, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(6, 100, 26), // "on_beginTripButton_clicked"
QT_MOC_LITERAL(7, 127, 24) // "on_refreshButton_clicked"

    },
    "tripSelection\0BackButtonClicked\0\0"
    "on_addButton_clicked\0on_removeButton_clicked\0"
    "on_backButton_clicked\0on_beginTripButton_clicked\0"
    "on_refreshButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tripSelection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tripSelection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tripSelection *_t = static_cast<tripSelection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BackButtonClicked(); break;
        case 1: _t->on_addButton_clicked(); break;
        case 2: _t->on_removeButton_clicked(); break;
        case 3: _t->on_backButton_clicked(); break;
        case 4: _t->on_beginTripButton_clicked(); break;
        case 5: _t->on_refreshButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (tripSelection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tripSelection::BackButtonClicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject tripSelection::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tripSelection.data,
      qt_meta_data_tripSelection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tripSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tripSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tripSelection.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int tripSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void tripSelection::BackButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
