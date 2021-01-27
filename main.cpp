#include "ui/mainwindow.h"

#include <QApplication>

#include "tests/tests.h"

int main(int argc, char *argv[])    
{
    TestAll();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
