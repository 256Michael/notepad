/****************************************************************************
** Meta object code from reading C++ file 'filemenu.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/filemenu.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filemenu.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileMenu_t {
    QByteArrayData data[11];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileMenu_t qt_meta_stringdata_FileMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FileMenu"
QT_MOC_LITERAL(1, 9, 14), // "newWindowClick"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "newFileclick"
QT_MOC_LITERAL(4, 38, 9), // "openclick"
QT_MOC_LITERAL(5, 48, 9), // "saveclick"
QT_MOC_LITERAL(6, 58, 11), // "saveasclick"
QT_MOC_LITERAL(7, 70, 7), // "saveAll"
QT_MOC_LITERAL(8, 78, 11), // "saveSession"
QT_MOC_LITERAL(9, 90, 10), // "closeclick"
QT_MOC_LITERAL(10, 101, 9) // "quitclick"

    },
    "FileMenu\0newWindowClick\0\0newFileclick\0"
    "openclick\0saveclick\0saveasclick\0saveAll\0"
    "saveSession\0closeclick\0quitclick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,
      10,    0,   67,    2, 0x06 /* Public */,

 // signals: parameters
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

void FileMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileMenu *_t = static_cast<FileMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newWindowClick(); break;
        case 1: _t->newFileclick(); break;
        case 2: _t->openclick(); break;
        case 3: _t->saveclick(); break;
        case 4: _t->saveasclick(); break;
        case 5: _t->saveAll(); break;
        case 6: _t->saveSession(); break;
        case 7: _t->closeclick(); break;
        case 8: _t->quitclick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::newWindowClick)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::newFileclick)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::openclick)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::saveclick)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::saveasclick)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::saveAll)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::saveSession)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::closeclick)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::quitclick)) {
                *result = 8;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FileMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_FileMenu.data,
      qt_meta_data_FileMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FileMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int FileMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
void FileMenu::newWindowClick()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FileMenu::newFileclick()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FileMenu::openclick()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FileMenu::saveclick()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FileMenu::saveasclick()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FileMenu::saveAll()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FileMenu::saveSession()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FileMenu::closeclick()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void FileMenu::quitclick()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
