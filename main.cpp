#include <QApplication>
#include "src/GUI/Components/MainWindow/mainwindow.hpp"  // Include mainwindow.hpp directly
#include "src/GUI/GUI.hpp"
using namespace GUI;

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    GUIManager guiManager; // Create an instance of a class to manage GUI components
    guiManager.initialize(); // Initialize GUI components

    // Create and show the main window
    Mainwindow mainWindow; // Use Mainwindow directly
    mainWindow.show();

    int execResult = app.exec(); // Run the application loop

    guiManager.shutdown(); // Clean up GUI components

    return execResult;
}
