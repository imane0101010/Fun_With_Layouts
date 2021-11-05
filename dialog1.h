#ifndef DIALOG1_H
#define DIALOG1_H
#include <QWidget>
#include <QLineEdit>
#include <QFormLayout>
#include <QPushButton>
#include <QCheckBox>
class Dialog1: public QWidget
{
public:
   explicit Dialog1(QWidget *parent = nullptr);
    void createWidgets();
    void placeWidgets();
     void makeConnections();
    QLineEdit* name ;
    QPushButton* search;
    QPushButton* close;
    QCheckBox* match;
    QCheckBox* search_b;
};

#endif // DIALOG1_H
