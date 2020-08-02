#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if(wiringPiSetup() == -1)   exit(1);
    MainWindow w;
        
    w.showFullScreen();
    w.show();


    return a.exec();
}
