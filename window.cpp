//#include <Qt>
#include <QMenu>
#include <QMenuBar>
#include "window.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent) {
    
    QPixmap newpix("new.png");
    QPixmap openpix("open.png");
    QPixmap quitpix("quit.png");
    auto *newa =new QAction(newpix, "&New", this);
    auto *open = new QAction(openpix, "&Open", this);
    auto *quit = new QAction(quitpix, "&Quit", this);
    quit->setShortcut(tr("CTRL+Q"));

  QMenu *file = menuBar()->addMenu("&File");
  file->addAction(newa);
  file->addAction(open);
  file->addSeparator();
  file->addAction(quit);

// This line may be necessary because some environments do no show menu icons by default
  qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);

  connect(quit, &QAction::triggered, qApp, QApplication::quit);
}
