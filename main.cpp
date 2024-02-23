#include "QApplication"
#include "src/GUI/GUI.hpp"
#include "src/Engine/Engine.hpp"


int main (int argc, char **argv)
{

    QApplication app(argc, argv);

        GUI::initialize();

        return QApplication::exec();

}