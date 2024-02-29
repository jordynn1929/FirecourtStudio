//
// Created by heather on 2/22/24.
//

#ifndef FIRECOURTSTUDIO_HEADER_HPP
#define FIRECOURTSTUDIO_HEADER_HPP


#include "src/GUI/GUI.hpp"
#include "qmenubar.h"


class Header : public QMenuBar {
    Header();


public:
    Header(QMenuBar header);

    Header(QWidget *parent, const QMenuBar &header);

    ~Header();
private:


};


#endif //FIRECOURTSTUDIO_HEADER_HPP
