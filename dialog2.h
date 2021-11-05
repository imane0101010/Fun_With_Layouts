#ifndef DIALOG2_H
#define DIALOG2_H
#include <QWidget>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QTextEdit>
class Dialog2: public QWidget
{
public:
    explicit Dialog2(QWidget *parent = nullptr);
    void createWidgets();
    void placeWidgets();
    void makeConnections();
    QLineEdit* name ;
    QLineEdit *company;
    QLineEdit *phone;
    QLineEdit *email;
     QLineEdit *problem_title;
     QTextEdit *summary;
     QComboBox *list ;
     QPushButton* reset;
     QPushButton* submit;
    QPushButton* n_submit;

};

#endif // DIALOG2_H
