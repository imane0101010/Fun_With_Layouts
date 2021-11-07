# Fun_With_Layouts
The goal of this lab is learn to analyse the construction of a form and then code it using Netsted layouts.

## Nested Layouts: 

![image](https://github.com/imane0101010/Fun_With_Layouts/blob/1f47058dbb68d31cad89dfa30402246b09205cd8/C.PNG)
First let´s create the components and the layouts :
    
``` cpp
    QLineEdit* name ;
    QPushButton* search;
    QPushButton* close;
    QCheckBox* match;
    QCheckBox* search_b;
    auto main_layout = new QHBoxLayout;
    auto left_layout = new QVBoxLayout;
    auto right_layout = new QVBoxLayout;
    auto Top_left_layout = new QFormLayout;
```
    
  Then,let´s add the components in the layouts and add the layouts in the main one:
    
``` cpp
      Top_left_layout->addRow("name:", name);
      right_layout->addWidget(search);
      left_layout->addLayout(Top_left_layout);
      main_layout->addLayout(left_layout);
 ```
      
Now, let's connect the close button:
``` cpp
    connect(close, &QPushButton::clicked, qApp, &QApplication::exit);
 ```
Finally,let´s add strech to the layouts:
``` cpp
      right_layout->addStretch(10);
 ```      
Here is the result:

![image](https://github.com/imane0101010/Fun_With_Layouts/blob/80167854cdfdbf1928609e18af25aa82aebf1a7b/B.PNG)


## Bug Report Form:

First let´s create the components and the layouts : 
``` cpp
     QLineEdit *problem_title;
     QTextEdit *summary;
     QComboBox *list ;
     QPushButton* reset;
     auto main_layout = new QVBoxLayout;
     auto down_layout = new QHBoxLayout;
     auto layout_ = new QFormLayout;
 ``` 
Then let´s add the components in the layouts and add the layouts in the main one:
``` cpp
    layout_->addRow("Name:",name);
    list->addItem("Always");
    down_layout->addWidget(reset);
    main_layout->addLayout(layout_);
 ```    
Then let´s add the strech:
``` cpp      
    down_layout->addStretch(20);
 ```
Here is the result:

![image](https://github.com/imane0101010/Fun_With_Layouts/blob/9f81e1afc33772d61c0fdf9fe3a8ab3a3f965eea/A.PNG)
   
## Calculator:

First let´s create the components and the layouts : 
``` cpp    
    QGridLayout *grid_layout;
    QVBoxLayout* layout ;
    QVector<QString> nums { "9", "8", "7","/","6", "5", "4","*","3", "2", "1","0","+", "-", ".", "=" };
    QLCDNumber* lcd;
 ```    
 
Then let´s add the components in the layouts and add the layouts in the main one:
``` cpp   
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
 ```
Here is the result:

![image](https://github.com/imane0101010/Fun_With_Layouts/blob/66e93c1829f5ccd64fabd457be3134866f8984be/D1.png)
   

