/****************************************************************************
** Meta object code from reading C++ file 'systemcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../controller/systemcontroller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN16systemcontrollerE_t {};
} // unnamed namespace

template <> constexpr inline auto systemcontroller::qt_create_metaobjectdata<qt_meta_tag_ZN16systemcontrollerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "systemcontroller",
        "currentSystemTempChanged",
        "",
        "targetSystemTempChanged",
        "systemStateChanged",
        "messageStatusSystemChanged",
        "setSystemState",
        "HeatSelections",
        "newSystemState",
        "setCurrentSystemTemp",
        "newCurrentSystemTemp",
        "setMessageStatusSystem",
        "newMessageStatusSystem",
        "setTargetSystemTemp",
        "newTargetSystemTemp",
        "currentSystemTemp",
        "targetSystemTemp",
        "messageStatusSystem",
        "systemState",
        "HEATING",
        "COOLING",
        "AUTO"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentSystemTempChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'targetSystemTempChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'systemStateChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'messageStatusSystemChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSystemState'
        QtMocHelpers::SlotData<void(HeatSelections)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Slot 'setCurrentSystemTemp'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'setMessageStatusSystem'
        QtMocHelpers::SlotData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Slot 'setTargetSystemTemp'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'currentSystemTemp'
        QtMocHelpers::PropertyData<int>(15, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 0),
        // property 'targetSystemTemp'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 1),
        // property 'messageStatusSystem'
        QtMocHelpers::PropertyData<QString>(17, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 3),
        // property 'systemState'
        QtMocHelpers::PropertyData<HeatSelections>(18, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 2),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'HeatSelections'
        QtMocHelpers::EnumData<HeatSelections>(7, 7, QMC::EnumFlags{}).add({
            {   19, HeatSelections::HEATING },
            {   20, HeatSelections::COOLING },
            {   21, HeatSelections::AUTO },
        }),
    };
    return QtMocHelpers::metaObjectData<systemcontroller, qt_meta_tag_ZN16systemcontrollerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject systemcontroller::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16systemcontrollerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16systemcontrollerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16systemcontrollerE_t>.metaTypes,
    nullptr
} };

void systemcontroller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<systemcontroller *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentSystemTempChanged(); break;
        case 1: _t->targetSystemTempChanged(); break;
        case 2: _t->systemStateChanged(); break;
        case 3: _t->messageStatusSystemChanged(); break;
        case 4: _t->setSystemState((*reinterpret_cast< std::add_pointer_t<HeatSelections>>(_a[1]))); break;
        case 5: _t->setCurrentSystemTemp((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setMessageStatusSystem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->setTargetSystemTemp((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (systemcontroller::*)()>(_a, &systemcontroller::currentSystemTempChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (systemcontroller::*)()>(_a, &systemcontroller::targetSystemTempChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (systemcontroller::*)()>(_a, &systemcontroller::systemStateChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (systemcontroller::*)()>(_a, &systemcontroller::messageStatusSystemChanged, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->currentSystemTemp(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->targetSystemTemp(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->messageStatusSystem(); break;
        case 3: *reinterpret_cast<HeatSelections*>(_v) = _t->systemState(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentSystemTemp(*reinterpret_cast<int*>(_v)); break;
        case 1: _t->setTargetSystemTemp(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setMessageStatusSystem(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSystemState(*reinterpret_cast<HeatSelections*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *systemcontroller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *systemcontroller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16systemcontrollerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int systemcontroller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void systemcontroller::currentSystemTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void systemcontroller::targetSystemTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void systemcontroller::systemStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void systemcontroller::messageStatusSystemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
