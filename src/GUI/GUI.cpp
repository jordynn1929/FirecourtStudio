#include "GUI.hpp"
#include "Components/MainWindow/mainwindow.hpp"
#include "Components/Playlist/PlaylistWidget.hpp"

namespace GUI {

// Initialize static members
    MainWindow* GUIManager::mainWindow = nullptr;
    PlaylistWidget* GUIManager::playlistWidget = nullptr;

    void GUIManager::initialize() {
        // Initialize GUI components
    }

    void GUIManager::shutdown() {
        delete mainWindow;
        delete playlistWidget;
    }

} // namespace GUI
