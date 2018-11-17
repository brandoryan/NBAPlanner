/****************************************************************************
** Meta object code from reading C++ file 'admin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../NBABasketball/admin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_admin_t {
    QByteArrayData data[12];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_admin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_admin_t qt_meta_stringdata_admin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "admin"
QT_MOC_LITERAL(1, 6, 19), // "LogoutButtonClicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 26), // "on_teamsByTeamName_clicked"
QT_MOC_LITERAL(4, 54, 36), // "on_coachesAndTeamsByTeamName_..."
QT_MOC_LITERAL(5, 91, 42), // "on_arenasAndTeamsBySeatingCap..."
QT_MOC_LITERAL(6, 134, 27), // "on_teamsByArenaName_clicked"
QT_MOC_LITERAL(7, 162, 33), // "on_easternTeamsByTeamName_cli..."
QT_MOC_LITERAL(8, 196, 49), // "on_teamAndArenaNamesByAscendi..."
QT_MOC_LITERAL(9, 246, 50), // "on_southeastDivisionEasternTe..."
QT_MOC_LITERAL(10, 297, 25), // "on_allInformation_clicked"
QT_MOC_LITERAL(11, 323, 23) // "on_logoutButton_clicked"

    },
    "admin\0LogoutButtonClicked\0\0"
    "on_teamsByTeamName_clicked\0"
    "on_coachesAndTeamsByTeamName_clicked\0"
    "on_arenasAndTeamsBySeatingCapacity_clicked\0"
    "on_teamsByArenaName_clicked\0"
    "on_easternTeamsByTeamName_clicked\0"
    "on_teamAndArenaNamesByAscendingYearJoined_clicked\0"
    "on_southeastDivisionEasternTeamsByTeamName_clicked\0"
    "on_allInformation_clicked\0"
    "on_logoutButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_admin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

       0        // eod
};

void admin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        admin *_t = static_cast<admin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LogoutButtonClicked(); break;
        case 1: _t->on_teamsByTeamName_clicked(); break;
        case 2: _t->on_coachesAndTeamsByTeamName_clicked(); break;
        case 3: _t->on_arenasAndTeamsBySeatingCapacity_clicked(); break;
        case 4: _t->on_teamsByArenaName_clicked(); break;
        case 5: _t->on_easternTeamsByTeamName_clicked(); break;
        case 6: _t->on_teamAndArenaNamesByAscendingYearJoined_clicked(); break;
        case 7: _t->on_southeastDivisionEasternTeamsByTeamName_clicked(); break;
        case 8: _t->on_allInformation_clicked(); break;
        case 9: _t->on_logoutButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (admin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&admin::LogoutButtonClicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject admin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_admin.data,
      qt_meta_data_admin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *admin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *admin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_admin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int admin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void admin::LogoutButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
