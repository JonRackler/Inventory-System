#include "window.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Window window;

  window.resize(350, 250);
  window.setWindowTitle("Simple menu");
  window.show();

  return app.exec();
}
