/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[11];
    char stringdata5[8];
    char stringdata6[11];
    char stringdata7[13];
    char stringdata8[9];
    char stringdata9[19];
    char stringdata10[15];
    char stringdata11[19];
    char stringdata12[17];
    char stringdata13[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 7),  // "deleted"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 10),  // "changeInfo"
        QT_MOC_LITERAL(31, 10),  // "deleteInfo"
        QT_MOC_LITERAL(42, 7),  // "addInfo"
        QT_MOC_LITERAL(50, 10),  // "selectInfo"
        QT_MOC_LITERAL(61, 12),  // "cancelSelect"
        QT_MOC_LITERAL(74, 8),  // "sendMail"
        QT_MOC_LITERAL(83, 18),  // "testOverrideDelete"
        QT_MOC_LITERAL(102, 14),  // "deletedSurname"
        QT_MOC_LITERAL(117, 18),  // "testOverrideSelect"
        QT_MOC_LITERAL(136, 16),  // "testOverrideSend"
        QT_MOC_LITERAL(153, 5)   // "reset"
    },
    "MainWindow",
    "deleted",
    "",
    "changeInfo",
    "deleteInfo",
    "addInfo",
    "selectInfo",
    "cancelSelect",
    "sendMail",
    "testOverrideDelete",
    "deletedSurname",
    "testOverrideSelect",
    "testOverrideSend",
    "reset"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   81,    2, 0x0a,    2 /* Public */,
       4,    0,   82,    2, 0x0a,    3 /* Public */,
       5,    0,   83,    2, 0x0a,    4 /* Public */,
       6,    0,   84,    2, 0x0a,    5 /* Public */,
       7,    0,   85,    2, 0x0a,    6 /* Public */,
       8,    0,   86,    2, 0x0a,    7 /* Public */,
       9,    1,   87,    2, 0x0a,    8 /* Public */,
      11,    0,   90,    2, 0x0a,   10 /* Public */,
      12,    0,   91,    2, 0x0a,   11 /* Public */,
      13,    0,   92,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'deleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancelSelect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendMail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testOverrideDelete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'testOverrideSelect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'testOverrideSend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deleted(); break;
        case 1: _t->changeInfo(); break;
        case 2: _t->deleteInfo(); break;
        case 3: _t->addInfo(); break;
        case 4: _t->selectInfo(); break;
        case 5: _t->cancelSelect(); break;
        case 6: _t->sendMail(); break;
        case 7: _t->testOverrideDelete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->testOverrideSelect(); break;
        case 9: _t->testOverrideSend(); break;
        case 10: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::deleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::deleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
