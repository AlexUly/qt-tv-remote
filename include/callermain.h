#include <QMainWindow>
#include <QtWidgets/QPushButton>
#include <string>
#include <QtWidgets/QSlider>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QLineEdit>
#include <QtMultimedia/QMultimedia>

class CallerMainWindow : public QMainWindow {
Q_OBJECT

public:
    CallerMainWindow(QWidget *parent = nullptr) : QMainWindow(parent) {
}

    QLineEdit *lineEdit = nullptr;
    int vol = 50;
    std::string channel = "1";
    int chn = 1;
public slots:

    void print();

    void add0();

    void add1();

    void add2();

    void add3();

    void add4();

    void add5();

    void add6();

    void add7();

    void add8();

    void add9();

    void volUp();

    void volDown();

    void clear();

    void next();

    void prev();

};
