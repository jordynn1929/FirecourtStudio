//
// Created by heather on 2/22/24.
//
// GUI.cpp

#include "GUI.hpp"
#include "Components/MainWindow/MainWindow.hpp"
#include "Components/Playlist/PlaylistWidget.hpp"

// Initialize static members
MainWindow* GUI::mainWindow = nullptr;
PlaylistWidget* GUI::playlistWidget = nullptr;

void GUI::initialize() {
    mainWindow = new MainWindow();
    playlistWidget = new PlaylistWidget();
}

void GUI::shutdown() {
    delete mainWindow;
    delete playlistWidget;
}
