#include "../include/callermain.h"

    void CallerMainWindow::print(){
        if(channel != "") {
            chn = std::stoi(channel);
            channel = "";
        }
        lineEdit->setText(QString::fromStdString("Channel: " + std::to_string(chn) + " Volume: " + std::to_string(vol)));
    };

    void CallerMainWindow::add0() {
        channel += "0";
    };

    void CallerMainWindow::add1(){
        channel += "1";
    };

    void CallerMainWindow::add2(){
        channel += "2";

    };

    void CallerMainWindow::add3(){
        channel += "3";
    };

    void CallerMainWindow::add4(){
        channel += "4";
    };

    void CallerMainWindow::add5(){
        channel += "5";
    };

    void CallerMainWindow::add6(){
        channel += "6";
    };

    void CallerMainWindow::add7(){
        channel += "7";
    };

    void CallerMainWindow::add8(){
        channel += "8";
    };

    void CallerMainWindow::add9(){
        channel += "9";
    };

    void CallerMainWindow::volUp(){
        vol += 10;
        if(vol > 100)
            vol = 100;
        print();
    }

    void CallerMainWindow::volDown(){
        vol -= 10;
        if(vol < 0)
            vol = 0;
        print();
    }
    void CallerMainWindow::clear(){
        channel = "0";
        print();
    }
    void CallerMainWindow::next(){
        chn++;
        print();
    }
    void CallerMainWindow::prev(){
        if(chn > 0)
            chn--;
        print();
    }

