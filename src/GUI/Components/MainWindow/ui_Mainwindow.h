#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <QLabel>

namespace GUI {

    class Ui_Mainwindow
    {
    public:
        QWidget *centralwidget;
        QMenuBar *menubar;
        QStatusBar *statusbar;

        void setupUi(QMainWindow *GUI__Mainwindow)
        {
            if (GUI__Mainwindow->objectName().isEmpty())
                GUI__Mainwindow->setObjectName(QString::fromUtf8("GUI__Mainwindow"));
            GUI__Mainwindow->resize(600, 400); // Increased size
            QWidget *centralwidget = new QWidget(GUI__Mainwindow);
            centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
            GUI__Mainwindow->setCentralWidget(centralwidget);

            // Set the background color to white using QPalette
            QPalette pal = centralwidget->palette();
            pal.setColor(QPalette::Window, Qt::white);
            centralwidget->setAutoFillBackground(true);
            centralwidget->setPalette(pal);

            // Create a label for "Firecourt Studio" and set its properties
            QLabel *titleLabel = new QLabel(centralwidget);
            QFont font;
            font.setPointSize(20); // Increased font size
            titleLabel->setFont(font);
            titleLabel->setText("Firecourt Studio");
            titleLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);
            titleLabel->setGeometry(QRect(20, 20, 400, 50)); // Adjusted position
            titleLabel->adjustSize();

            QMenuBar *menubar = new QMenuBar(GUI__Mainwindow);
            menubar->setObjectName(QString::fromUtf8("menubar"));
            menubar->setGeometry(QRect(0, 0, 600, 17)); // Adjusted width
            GUI__Mainwindow->setMenuBar(menubar);
            QStatusBar *statusbar = new QStatusBar(GUI__Mainwindow);
            statusbar->setObjectName(QString::fromUtf8("statusbar"));
            GUI__Mainwindow->setStatusBar(statusbar);

            retranslateUi(GUI__Mainwindow);

            QMetaObject::connectSlotsByName(GUI__Mainwindow);
        } // setupUi


        void retranslateUi(QMainWindow *GUI__Mainwindow)
        {
            GUI__Mainwindow->setWindowTitle(QCoreApplication::translate("GUI::Mainwindow", "Firecourt Studio", nullptr));
        } // retranslateUi

    };

} // namespace GUI

namespace GUI {
    namespace Ui {
        class Mainwindow: public Ui_Mainwindow {};
    } // namespace Ui
} // namespace GUI

#endif // UI_MAINWINDOW_H
