#include <QApplication>
#include "./ui_caller.h"
#include "../include/callermain.h"
#include <QTimer>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    int chn;
    CallerMainWindow window(nullptr);
    Ui::MainWindow caller;
    caller.setupUi(&window);
    window.lineEdit = caller.lineEdit;
    QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, &window, &CallerMainWindow::print);
    timer.start(1000);
    window.show();
    return QApplication::exec();
}