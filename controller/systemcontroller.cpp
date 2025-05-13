#include "systemcontroller.h"

systemcontroller::systemcontroller(QObject *parent)
    : QObject{parent}
    , m_currentSystemTemp(65)
    , m_targetSystemTemp (70)
    , m_messageStatusSystem("Heating...")
    , m_systemState(HEATING)
{}

int systemcontroller::currentSystemTemp() const
{
    return m_currentSystemTemp;
}



int systemcontroller::targetSystemTemp() const
{
    return m_targetSystemTemp;
}

void systemcontroller::setTargetSystemTemp(int newTargetSystemTemp)
{
    m_targetSystemTemp = newTargetSystemTemp;
    systemcontroller::checkSystemState();
    emit targetSystemTempChanged();
}

void systemcontroller::setSystemState(HeatSelections newSystemState)
{
    m_systemState = newSystemState;
    emit systemStateChanged();
}

void systemcontroller::setCurrentSystemTemp(int newCurrentSystemTemp)
{
    m_currentSystemTemp = newCurrentSystemTemp;
    emit currentSystemTempChanged();
}



systemcontroller::HeatSelections systemcontroller::systemState() const
{
    return m_systemState;
}



QString systemcontroller::messageStatusSystem() const
{
    return m_messageStatusSystem;
}

void systemcontroller::setMessageStatusSystem(const QString &newMessageStatusSystem)
{
    if (m_messageStatusSystem == newMessageStatusSystem)
        return;
    m_messageStatusSystem = newMessageStatusSystem;
    emit messageStatusSystemChanged();
}

void systemcontroller::checkSystemState()
{
    if(m_targetSystemTemp > m_currentSystemTemp)
        setMessageStatusSystem("Heating...");
    else if(m_targetSystemTemp < m_currentSystemTemp )
        setMessageStatusSystem("Cooling...");
    else
        setMessageStatusSystem("Holding...");
}


