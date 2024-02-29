/********************************************************************************
** Form generated from reading UI file 'Mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

namespace FirecourtStudio {

class Ui_Mainwindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FirecourtStudio__Mainwindow)
    {
        if (FirecourtStudio__Mainwindow->objectName().isEmpty())
            FirecourtStudio__Mainwindow->setObjectName(QString::fromUtf8("FirecourtStudio__Mainwindow"));
        FirecourtStudio__Mainwindow->resize(400, 300);
        centralwidget = new QWidget(FirecourtStudio__Mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: white;"));
        FirecourtStudio__Mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FirecourtStudio__Mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 17));
        FirecourtStudio__Mainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(FirecourtStudio__Mainwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FirecourtStudio__Mainwindow->setStatusBar(statusbar);

        retranslateUi(FirecourtStudio__Mainwindow);

        QMetaObject::connectSlotsByName(FirecourtStudio__Mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *FirecourtStudio__Mainwindow)
    {
        FirecourtStudio__Mainwindow->setWindowTitle(QCoreApplication::translate("FirecourtStudio::Mainwindow", "Firecourt Studio", nullptr));
    } // retranslateUi

};

} // namespace FirecourtStudio

namespace FirecourtStudio {
namespace Ui {
    class Mainwindow: public Ui_Mainwindow {};
} // namespace Ui
} // namespace FirecourtStudio

#endif // UI_MAINWINDOW_H
