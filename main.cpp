#include <QApplication>
#include "FormEx.h"
#include "dialog1.h"
#include "dialog2.h"
#include "dialog3.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);




  Dialog3 window;
  Dialog2 window1;
  Dialog1 window2;

//  window.setWindowTitle("Form example");
 window.show();
  window1.show();
   window2.show();

  return app.exec();
}
