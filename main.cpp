#include <iostream>
#include <QApplication>

#include <QPointF>
#include "Swarm.h"
#include "mainwindow.h"

void buttonClickTest();

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.setFixedSize(800,600);
    mainWindow.show();

    return app.exec();
}
