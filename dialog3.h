#ifndef DIALOG3_H
#define DIALOG3_H
#include <QWidget>
#include <QGridLayout>
#include <QLCDNumber>
#include <QPushButton>
#include <QVBoxLayout>
class Dialog3 : public QWidget {

  public:
 Dialog3(QWidget *parent= nullptr);
   void createWidgets();
   void placeWidgets();
   void makeConnections();
    QGridLayout *grid_layout;
    QVBoxLayout* layout ;
    QVector<QString> nums;
    QLCDNumber* lcd;

};
#endif // DIALOG3_H
