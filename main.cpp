#include <QCoreApplication>
#include <qDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int i;
    qDebug()<<"Hello world"<<endl;
    return a.exec();
}
