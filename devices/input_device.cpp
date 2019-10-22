#include "input_device.h"
#include <QDebug>

input_device::input_device(QObject *parent) : QObject(parent)
{

}

void input_device::activete()
{
     qDebug() << "Input devices are active";
     emit command("Wellcome");
}


