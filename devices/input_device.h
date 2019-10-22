#ifndef INPUT_DEVICE_H
#define INPUT_DEVICE_H

#include <QObject>

class input_device : public QObject
{
    Q_OBJECT
public:
    explicit input_device(QObject *parent = nullptr);

    void activete();

signals:
    void command(QString command);

private:

};

#endif // INPUT_DEVICE_H
