#include "dialog3.h"

#include <QApplication>
Dialog3::Dialog3(QWidget *parent):QWidget(parent)

{
createWidgets();
placeWidgets();
}

 void Dialog3::createWidgets(){

     grid_layout = new QGridLayout;
     grid_layout->setSpacing(2);
    nums={ "9", "8", "7","6", "5", "4","3", "2", "1","0", "*", "-", "/", ".", "=", "+"};
    lcd = new QLCDNumber;
   lcd->setSegmentStyle(QLCDNumber::Filled);



}



void Dialog3::placeWidgets(){
    layout = new QVBoxLayout();
    layout->setSpacing(2);
    layout->addWidget(lcd);
    layout->addLayout(grid_layout);

      int pos = 0;

     for (int i=1; i<=4; i++) {
     for (int j=1; j<=4; j++) {

       auto *button = new QPushButton(nums[pos], this);
       button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
       grid_layout->addWidget(button, i, j);
       pos++;
     }
    }

      setLayout(layout);


  }






