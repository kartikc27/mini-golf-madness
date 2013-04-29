#include <QtGui/QApplication>
#include "mainwindow.h"

/** 
  * This is the "main" function which instantiates a mainwindow object and shows it
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
