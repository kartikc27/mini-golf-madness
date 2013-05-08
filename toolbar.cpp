#include "toolbar.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "ctype.h"

/** A constructor for the toolbar class that inits a toolbar object 
 *  with two buttons to start and quit
 *  @param mwin the name of a pointer to a MainWindow Object
 */
ToolBar::ToolBar(MainWindow& mw)  
{
  m = &mw; 
  hasStarted = false;
  
  QAction *startGameAction = new QAction("Start Game", this);
  addAction(startGameAction);
  connect(startGameAction, SIGNAL(triggered()), this, SLOT(startGame()));
  
  QAction *quitGameAction = new QAction("Quit Game", this);
  addAction(quitGameAction);
  connect(quitGameAction, SIGNAL(triggered()), this, SLOT(quitGame()));
  

  
}

/** Show function for ToolBar
 */
void ToolBar::show() {
    
    this->show();
}


/** Starts the game after retreiving information from the QLineEdits in the left side Dock
 */
void ToolBar::startGame()
{
  m->name = m->n->get_name();
  m->name2 = m->name.toStdString();
  if (m->name.length() < 1)
  {
    QMessageBox msgBox;
    msgBox.setText ("Please enter a valid name");
    msgBox.exec();
    
  }
  else
  {
    m->window = new GraphicWindow(*m);
    m->setCentralWidget(m->window);
    m->gt = new GameTracker(*(m->window));
    QDockWidget *qdw2 = new QDockWidget();
    qdw2->setWidget(m->gt);
    m->addDockWidget(Qt::RightDockWidgetArea, qdw2);
    qdw2->setFeatures(QDockWidget::NoDockWidgetFeatures);
    hasStarted = true;
  }
}

/** Quits the game by closing the mainwindow
 */

void ToolBar::quitGame()
{
  if (hasStarted)
    m->close();
  else 
  {
      QMessageBox msgBox;
      msgBox.setText ("Game has not started yet. Please start the game first");
      msgBox.exec();
  }
}


/** Default destructor
 */
ToolBar::~ToolBar()
{
    
}

