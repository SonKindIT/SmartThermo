#ifndef SYSTEMCONTROLLER_H
#define SYSTEMCONTROLLER_H

#include <QObject>

class systemcontroller : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int currentSystemTemp READ currentSystemTemp WRITE setCurrentSystemTemp NOTIFY currentSystemTempChanged FINAL)
    Q_PROPERTY(int  targetSystemTemp READ targetSystemTemp WRITE setTargetSystemTemp NOTIFY targetSystemTempChanged FINAL)
    Q_PROPERTY(QString messageStatusSystem READ messageStatusSystem WRITE setMessageStatusSystem NOTIFY messageStatusSystemChanged FINAL)
    Q_PROPERTY(HeatSelections systemState READ systemState WRITE setSystemState NOTIFY systemStateChanged FINAL)
public:
    explicit systemcontroller(QObject *parent = nullptr);

    int currentSystemTemp() const;

    int targetSystemTemp() const;


    enum HeatSelections{
        HEATING,
        COOLING,
        AUTO
    };
    Q_ENUM(HeatSelections)

    HeatSelections systemState() const;
    QString messageStatusSystem() const;

public slots:
    void setSystemState(HeatSelections newSystemState);
    void setCurrentSystemTemp(int newCurrentSystemTemp);
    void setMessageStatusSystem(const QString &newMessageStatusSystem);
    void setTargetSystemTemp(int newTargetSystemTemp);

signals:
    void currentSystemTempChanged();
    void targetSystemTempChanged();

    void systemStateChanged();

    void messageStatusSystemChanged();

private:
    int m_currentSystemTemp;
    int m_targetSystemTemp;
    HeatSelections m_systemState;
    QString m_messageStatusSystem;

    void checkSystemState();

};

#endif // SYSTEMCONTROLLER_H
