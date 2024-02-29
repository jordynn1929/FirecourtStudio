#ifndef FIRECOURTSTUDIO_MAINWINDOW_HPP
#define FIRECOURTSTUDIO_MAINWINDOW_HPP

#include <QMainWindow>
#include "ui_Mainwindow.h" // Include the generated UI header file

namespace GUI {

    class Mainwindow : public QMainWindow {
    Q_OBJECT

    public:
        explicit Mainwindow(QWidget *parent = nullptr);
        ~Mainwindow() override;

    private:
        Ui::Mainwindow *ui; // Use Ui::Mainwindow
    };

} // namespace GUI

#endif // FIRECOURTSTUDIO_MAINWINDOW_HPP
