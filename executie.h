#ifndef EXECUTIE_H
#define EXECUTIE_H

#include <QObject>
#include <QDebug>
#include "devices/input_device.h"
#include "devices/output_devices.h"
enum{
    input,
    output
};

enum{
    voice,
    android,
    web
};

class executie : public QObject
{
    Q_OBJECT
public:
    explicit executie(QObject *parent = nullptr);

    input_device *_input;
    output_devices *_output;

    void run(int device);
    void activete(int device, int feature);

signals:

public slots:

private:
    void activete(int device);
};

#endif // EXECUTIE_H
