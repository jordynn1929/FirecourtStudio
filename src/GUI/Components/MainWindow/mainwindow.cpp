// Created by heather on 2/23/24.

// You may need to build the project (run Qt uic code generator) to get "ui_Mainwindow.h" resolved

#include "mainwindow.hpp"
#include "ui_Mainwindow.h"
#include <QLabel>


namespace GUI {

    Mainwindow::Mainwindow(QWidget *parent) :
            QMainWindow(parent), ui(new Ui::Mainwindow) {
        ui->setupUi(this);
    }

    Mainwindow::~Mainwindow() {
        delete ui;
    }

} // namespace GUI
