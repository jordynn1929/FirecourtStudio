// GUI.hpp

#ifndef FIRECOURTSTUDIO_GUI_HPP
#define FIRECOURTSTUDIO_GUI_HPP

#include "resource.hpp"

// Forward declaration of necessary classes
class MainWindow;
class PlaylistWidget;

class GUI {
public:
    static void initialize();
    static void shutdown();

private:
    static MainWindow* mainWindow;
    static PlaylistWidget* playlistWidget;
};

#endif // FIRECOURTSTUDIO_GUI_HPP
