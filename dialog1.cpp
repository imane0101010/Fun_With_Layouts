#include "dialog1.h"
#include <QLayoutItem>


Dialog1::Dialog1(QWidget *parent) {
createWidgets();
placeWidgets();


}



void Dialog1::createWidgets(){

name = new QLineEdit;
search = new QPushButton("Search");
close = new QPushButton("Close");
match = new QCheckBox("Match Case");
search_b= new QCheckBox("Search Backwards");


}



void Dialog1::placeWidgets(){

    auto main_layout = new QHBoxLayout;
    setLayout(main_layout);
    auto Top_left_layout = new QFormLayout;
    Top_left_layout->addRow("name:", name);
    auto left_layout = new QVBoxLayout;
    left_layout->addLayout(Top_left_layout);
    auto right_layout = new QVBoxLayout;
    left_layout->addWidget(match);
    left_layout->addWidget(search_b);
    //left_layout->addSpacerItem(new QSpacerItem(200, 20, QSizePolicy::Fixed));
    left_layout->addStretch(10);
    right_layout->addWidget(search);
    right_layout->addWidget(close);
    right_layout->addStretch(10);
     main_layout->addLayout(left_layout);
    main_layout->addLayout(right_layout);


}

void Dialog1::makeConnections(){

}
