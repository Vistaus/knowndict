/****************************************************************************
** Meta object code from reading C++ file 'dict.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/dict.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dict.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dict_t {
    QByteArrayData data[20];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dict_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dict_t qt_meta_stringdata_Dict = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Dict"
QT_MOC_LITERAL(1, 5, 13), // "error_message"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 15), // "warning_message"
QT_MOC_LITERAL(4, 36, 14), // "searchFinished"
QT_MOC_LITERAL(5, 51, 8), // "dictName"
QT_MOC_LITERAL(6, 60, 8), // "WordList"
QT_MOC_LITERAL(7, 69, 8), // "wordList"
QT_MOC_LITERAL(8, 78, 6), // "status"
QT_MOC_LITERAL(9, 85, 21), // "getWordDetailFinished"
QT_MOC_LITERAL(10, 107, 10), // "wordDetail"
QT_MOC_LITERAL(11, 118, 6), // "search"
QT_MOC_LITERAL(12, 125, 4), // "word"
QT_MOC_LITERAL(13, 130, 13), // "getWordDetail"
QT_MOC_LITERAL(14, 144, 6), // "offset"
QT_MOC_LITERAL(15, 151, 4), // "size"
QT_MOC_LITERAL(16, 156, 9), // "get_error"
QT_MOC_LITERAL(17, 166, 1), // "e"
QT_MOC_LITERAL(18, 168, 11), // "get_warning"
QT_MOC_LITERAL(19, 180, 1) // "w"

    },
    "Dict\0error_message\0\0warning_message\0"
    "searchFinished\0dictName\0WordList\0"
    "wordList\0status\0getWordDetailFinished\0"
    "wordDetail\0search\0word\0getWordDetail\0"
    "offset\0size\0get_error\0e\0get_warning\0"
    "w"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dict[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,
       4,    3,   60,    2, 0x06 /* Public */,
       9,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   70,    2, 0x0a /* Public */,
      13,    4,   73,    2, 0x0a /* Public */,
      16,    1,   82,    2, 0x08 /* Private */,
      18,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6, QMetaType::Bool,    5,    7,    8,
    QMetaType::Void, QMetaType::QJsonObject,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    5,   12,   14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void Dict::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dict *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error_message((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->warning_message((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->searchFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< WordList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->getWordDetailFinished((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 4: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->getWordDetail((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const qint32(*)>(_a[3])),(*reinterpret_cast< const qint32(*)>(_a[4]))); break;
        case 6: _t->get_error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->get_warning((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Dict::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dict::error_message)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Dict::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dict::warning_message)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Dict::*)(QString , WordList , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dict::searchFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Dict::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dict::getWordDetailFinished)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dict::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Dict.data,
    qt_meta_data_Dict,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dict::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dict::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dict.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Dict::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Dict::error_message(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dict::warning_message(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dict::searchFinished(QString _t1, WordList _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dict::getWordDetailFinished(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
