#include "output_devices.h"
#include <QDebug>
output_devices::output_devices(QObject *parent) : QObject(parent)
{

}

void output_devices::activete()
{
    qDebug() << "Output devices are active";
}

void output_devices::execute_command(QString command)
{
    qDebug() << "Command: " << command << " executed";
}
