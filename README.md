# Fun_With_Layouts
The goal of this lab is learn to analyse the construction of a form and thencode it using Netsted layouts.

## Nested Layouts:

![image](https://github.com/imane0101010/Fun_With_Layouts/blob/1f47058dbb68d31cad89dfa30402246b09205cd8/C.PNG)
First let´s create the components and the layouts :

    QLineEdit* name ;
    QPushButton* search;
    QPushButton* close;
    QCheckBox* match;
    QCheckBox* search_b;
    auto main_layout = new QHBoxLayout;
    auto left_layout = new QVBoxLayout;
    auto right_layout = new QVBoxLayout;
    auto Top_left_layout = new QFormLayout;

Then,let´s add the components in the layouts and add the layouts in the main one:
     
      Top_left_layout->addRow("name:", name);
      right_layout->addWidget(search);
      left_layout->addLayout(Top_left_layout);
      main_layout->addLayout(left_layout);
      
Finally,let´s add strech to the layouts:

      right_layout->addStretch(10);
      
Here is the result:

<img src="A.png" style="float: left; margin-right: 10px;" />


## Bug Report Form:

First let´s create the components and the layouts : 
             
     QLineEdit *problem_title;
     QTextEdit *summary;
     QComboBox *list ;
     QPushButton* reset;
     auto main_layout = new QVBoxLayout;
     auto down_layout = new QHBoxLayout;
     auto layout_ = new QFormLayout;
 
Then let´s add the components in the layouts and add the layouts in the main one:

    layout_->addRow("Name:",name);
    list->addItem("Always");
    down_layout->addWidget(reset);
    main_layout->addLayout(layout_);
    
Then let´s add the strech:
      
    down_layout->addStretch(20);

Here is the result:

<img src="B.png" style="float: left; margin-right: 10px;" />
   
## Calculator:

First let´s create the components and the layouts : 
    
    QGridLayout *grid_layout;
    QVBoxLayout* layout ;
    QVector<QString> nums { "9", "8", "7","/","6", "5", "4","*","3", "2", "1","0","+", "-", ".", "=" };
    QLCDNumber* lcd;
    
 
Then let´s add the components in the layouts and add the layouts in the main one:
   
    layout->addWidget(lcd);
    layout->addLayout(grid_layout);

      int pos = 0;

     for (int i=0; i<4; i++) {
     for (int j=0; j<4; j++) {

       auto *button = new QPushButton(nums[pos], this);
       button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
       grid_layout->addWidget(button, i, j);
       pos++;
     }
    }
    setLayout(layout);

Here is the result:

<img src="D.png" style="float: left; margin-right: 10px;" />
   

