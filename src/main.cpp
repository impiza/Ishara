#include "ishara.h"
#include <QApplication>
#include <iostream>
#include <getopt.h>

int main(int argc, char *argv[]) {
    int opt;

    while((opt = getopt(argc, argv, "vh")) != -1) {
        switch(opt) {
        case 'v':
            std::cout << "ishara 1.0" << std::endl << "Copyright (C) 2013 Saikat Basak" << std::endl;
            exit(0);
        case 'h':
            std::cout << "Usage: ishara [-vh]" << std::endl;
            exit(0);
        default:
            break;
        }
    }

    QApplication a(argc, argv);
    ishara w;
    w.show();

    return a.exec();
}
