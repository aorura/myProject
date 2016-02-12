/****************************************************************************
** Meta object code from reading C++ file 'testpango.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TestPango/testpango.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testpango.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestPango[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      31,   10,   10,   10, 0x08,
      45,   10,   10,   10, 0x08,
      59,   10,   10,   10, 0x08,
      73,   10,   10,   10, 0x08,
      87,   10,   10,   10, 0x08,
     101,   10,   10,   10, 0x08,
     115,   10,   10,   10, 0x08,
     129,   10,   10,   10, 0x08,
     143,   10,   10,   10, 0x08,
     157,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestPango[] = {
    "TestPango\0\0onApplyAttributes()\0"
    "appendText1()\0appendText2()\0appendText3()\0"
    "appendText4()\0appendText5()\0appendText6()\0"
    "appendText7()\0appendText8()\0appendText9()\0"
    "appendText10()\0"
};

void TestPango::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestPango *_t = static_cast<TestPango *>(_o);
        switch (_id) {
        case 0: _t->onApplyAttributes(); break;
        case 1: _t->appendText1(); break;
        case 2: _t->appendText2(); break;
        case 3: _t->appendText3(); break;
        case 4: _t->appendText4(); break;
        case 5: _t->appendText5(); break;
        case 6: _t->appendText6(); break;
        case 7: _t->appendText7(); break;
        case 8: _t->appendText8(); break;
        case 9: _t->appendText9(); break;
        case 10: _t->appendText10(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TestPango::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestPango::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TestPango,
      qt_meta_data_TestPango, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestPango::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestPango::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestPango::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestPango))
        return static_cast<void*>(const_cast< TestPango*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TestPango::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
