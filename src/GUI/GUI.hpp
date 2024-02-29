#ifndef FIRECOURTSTUDIO_GUI_HPP
#define FIRECOURTSTUDIO_GUI_HPP

#include "resource.hpp"
#include "src/GUI/Components/MainWindow/mainwindow.hpp"
namespace GUI {

// Forward declaration of necessary classes
    class MainWindow;
    class PlaylistWidget;

    class GUIManager {
    public:
        static void initialize();
        static void shutdown();

    private:
        static MainWindow* mainWindow;
        static PlaylistWidget* playlistWidget;
    };

} // namespace GUI

#endif // FIRECOURTSTUDIO_GUI_HPP
