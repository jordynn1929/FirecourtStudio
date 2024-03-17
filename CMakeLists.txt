cmake_minimum_required(VERSION 3.0...3.28)
project(FirecourtStudio)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)  # Add this line to enable autouic



find_package(Qt5Widgets)

add_executable(FirecourtStudio main.cpp
        src/GUI/Components/Playlist/PlaylistWidget.cpp
        src/GUI/Components/Playlist/PlaylistWidget.hpp
        src/GUI/resource.hpp
        src/GUI/Components/Footer/Footer.cpp
        src/GUI/Components/Footer/Footer.hpp
        src/GUI/GUI.hpp
        src/Engine/Engine.hpp
        src/Engine/Zeta/Compiler/Compiler.cpp
        src/Engine/Zeta/Compiler/Compiler.hpp
        src/Engine/Zeta/Config/ZetaConfig.cpp
        src/Engine/Zeta/Config/ZetaConfig.hpp
        src/Engine/Zeta/Editor/Tweaks.cpp
        src/Engine/Zeta/Editor/Tweaks.hpp
        src/Engine/resources.hpp
        src/GUI/Components/Header/Header.cpp
        src/GUI/Components/Header/Header.hpp
        src/GUI/GUI.cpp
        src/GUI/Components/MainWindow/mainwindow.cpp
        src/GUI/Components/MainWindow/mainwindow.hpp
        src/GUI/Components/MainWindow/Mainwindow.ui
)

include_directories(${Qt5Widgets_INCLUDES})
add_definitions(${Qt5Widgets_DEFINITIONS})
set(CMAKE_CXX_FLAGS "${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")

target_link_libraries(FirecourtStudio Qt5::Widgets)

