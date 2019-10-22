#include <QCoreApplication>
#include "executie.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Wellcome to Executie";


    executie *_executie = new executie();

    _executie->run(output);
    _executie->run(input);
    _executie->activete(input,voice);
    _executie->activete(input,web);

    return a.exec();
}
