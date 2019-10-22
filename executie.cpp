#include "executie.h"

executie::executie(QObject *parent) : QObject(parent)
{
    _input = new input_device(this);
    _output = new output_devices(this);
    connect(_input, SIGNAL(command(QString)), _output, SLOT(execute_command(QString)));

}

void executie::run(int device)
{
    activete(device);
}

void executie::activete(int device, int feature)
{

}

void executie::activete(int device)
{
    if(device == input) _input->activete();
    if(device == output) _output->activete();
}

