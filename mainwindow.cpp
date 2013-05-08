#include "mainwindow.h"


/** A constructor for MainWindow which creates and places the main widgets
 *  The class sets a line for name input and a slider to represent the power
 */
MainWindow::MainWindow()  
{
  setFocus();
  
  string tempname;
  int score; 
  
  
   
  
  
  t = new ToolBar(*this);
  addToolBar(t);
  
  n = new nameLine();
  QDockWidget *qdw3 = new QDockWidget();
  qdw3->setWidget( n );  
  addDockWidget(Qt::LeftDockWidgetArea, qdw3 );
  qdw3->setFeatures(QDockWidget::NoDockWidgetFeatures);
  
  ifstream ifile ("highscores.txt", ios::in);
  int i = 0;
  while (ifile.good())
  {
    ifile >> tempname >> score;
    scores[i] = new Player(tempname, score);
    i++;
  }
  
  
  p = new Power(*window);
  QDockWidget *qdw = new QDockWidget();
  qdw->setWidget(p);  
  addDockWidget(Qt::BottomDockWidgetArea, qdw);
  qdw->setFeatures(QDockWidget::NoDockWidgetFeatures);
  

}
/** A function to identify keypressevents and determine the appropriate responses
 *  @param e a pointer to a QKeyEvent. The three QKeyEvents are Key_A, Key_D, and Key_Space.
 *  This function will call the appropriate functions based on the input.
 */
void MainWindow::keyPressEvent(QKeyEvent* e)
{ 
  switch(e->key())
  {
    case Qt::Key_A:
    { 
      window->a->rotateLeft();
      break;
    }
    
    case Qt::Key_D:
    {
      window->a->rotateRight();
      break;
    }
    case Qt::Key_Space:
    {
      if (window->b->still)
      { 
        window->strokes += 1;
        window->b->setMove(p->value(), window->a->rotation);
        gt->updateStrokes();
      }
      break;
    }
  }
  
}

//Default destructor

MainWindow::~MainWindow()
{
  delete window;
}

