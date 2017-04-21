#include "mainwindow.h"
#include "vector.h"
#include <iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    std::cout << "123";

    return a.exec();
}
