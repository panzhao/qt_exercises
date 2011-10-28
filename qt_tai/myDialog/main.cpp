#include <QtGui/QApplication>
#include <QDebug>
#include <QLinkedList>
#include "mydialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // myDialog w;
   // w.show();
/*
    QVector<double> vect;

    for (int glob_j = 0; glob_j <= 5; glob_j++)
    {
        vect.append(glob_j + 1.2);
    }

    int i = 0;

    for (i = 0; i < vect.count(); i++)
    {
          qDebug() << vect[i] << endl;
    }
*/
    template <class T> class MyQlist:public QList
    {

    };
    QList <QString> list;
    list.append("hello");
    list.append("byebye");
    QList <QString>::iterator i = list.begin();
    list
    list.insert(i, "insert");

    for (i = list.begin(); i != list.end(); i++)
    {
        qDebug() << *i;
    }
    return a.exec();
}
