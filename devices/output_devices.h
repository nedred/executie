#ifndef OUTPUT_DEVICES_H
#define OUTPUT_DEVICES_H

#include <QObject>

class output_devices : public QObject
{
    Q_OBJECT
public:
    explicit output_devices(QObject *parent = nullptr);

    void activete();

signals:

public slots:
    void execute_command(QString command);

};

#endif // OUTPUT_DEVICES_H
