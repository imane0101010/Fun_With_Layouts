#include "dialog2.h"
#include <QHBoxLayout>
#include <QFormLayout>

Dialog2::Dialog2(QWidget *parent):QWidget(parent) {

        createWidgets();
        placeWidgets();
        makeConnections();
}

 void Dialog2::createWidgets(){

     name = new  QLineEdit;
     company = new  QLineEdit;
     phone = new  QLineEdit;
     email = new  QLineEdit;
     problem_title= new  QLineEdit;
     summary = new  QTextEdit;
     list = new QComboBox;
     reset = new  QPushButton("Reset");
     submit = new  QPushButton("Submit");
     n_submit= new  QPushButton("Don´t submit");

 }

 void Dialog2::placeWidgets(){
    auto main_layout = new QVBoxLayout;
    auto down_layout = new QHBoxLayout;
    auto layout_ = new QFormLayout;
    setLayout(main_layout);
       layout_->addRow("Name:",name);
       layout_->addRow("Comany:",company);
        layout_->addRow("Phone:",phone);
        layout_->addRow("Email:",email);
        layout_->addRow("Problem Title:",problem_title);
        layout_->addRow("Summary:",summary);
        list->addItem("Always");
        layout_->addRow("Reproductibility:",list);

        down_layout->addWidget(reset);
       // layout->addSpacer(SpaceItem)
         down_layout->addStretch();
        down_layout->addWidget(submit);
        down_layout->addWidget(n_submit);

        main_layout->addLayout(layout_);
        //main_layout->addWidget(list);
        main_layout->addLayout(down_layout);





 }

 void Dialog2::makeConnections()
 {


 }
