#include "graphicwindow.h"
#include "mainwindow.h"
#include <iostream>



/** Init GraphicWindow object a mainwindow reference. This object sets all that is needed for gameplay.
 *  Starts by default at level 1
 *  @param mw a reference to a MainWindow object to retrieve necessary data
 */
GraphicWindow::GraphicWindow(MainWindow &mw)  
{ 
    lives = 5;
    points = 0;
    strokes = 0;
    count = 0;
    level = 1;
    m = &mw;
    scene = new QGraphicsScene();
    setScene(scene);
    course1 = new QPixmap("images/hole1.png");
    gopher = new QPixmap("images/Gopher.png");
    hole = new QPixmap("images/golfhole.png");
    ball = new QPixmap("images/golfball.png");
    star = new QPixmap("images/star.png");
    arrow = new QPixmap("images/arrow.png");
    water1 = new QPixmap ("images/water1.png");
    tile1 = new QPixmap ("images/box.png");
    
    c1 = new CourseOne(course1, 0, 0);
    w1 = new Water1(water1, 0, 0);
    g1 = new Gopher(gopher, 300, 160, *this);
    h = new Hole(hole, 345, 20, *this);
    b = new Ball(ball, 400, 675, *this);
    s = new Star(star, 425, 125);
    a = new Arrow(arrow, b->getx()-20, b->gety()+15, *this);
    t1 = new Tile(tile1, 310, 450, *this);
    
    scene->addItem(c1);
    scene->addItem(h);
    scene->addItem(g1);
    scene->addItem(b);
    scene->addItem(w1);
    scene->addItem(s);
    scene->addItem(a);
    scene->addItem(t1);
    

    
   

    setFixedSize( WINDOW_MAX_X*2, WINDOW_MAX_Y*2 );
    setWindowTitle( "Mini Golf");
    
    htimer = new QTimer();
    htimer->setInterval(1);
    connect(htimer, SIGNAL(timeout()), this, SLOT(handleTimer()));
    htimer->start();
}

/** Represents the set up for level 2
 */
void GraphicWindow::level2()
{
  htimer->stop();
  scene->removeItem(c1);
  scene->removeItem(h);
  scene->removeItem(g1);
  scene->removeItem(b);
  scene->removeItem(w1);
  if (!(b->starGone))
  {
    scene->removeItem(s);
  }
  
  scene->removeItem(a);
  scene->removeItem(t1);
  water1 = new QPixmap ("images/water2.png");
  
  c1 = new CourseOne(course1, 0, 0);
  w1 = new Water1(water1, 0, 0);
  g1 = new Gopher(gopher, 255, 160, *this);
  g2 = new Gopher(gopher, 470, 160, *this);
  h = new Hole(hole, 345, 20, *this);
  b = new Ball(ball, 400, 675, *this);
  s = new Star(star, 340, 125);
  a = new Arrow(arrow, b->getx()-20, b->gety()+15, *this);
  t1 = new Tile(tile1, 310, 450, *this);
  t2 = new Tile(tile1, 465, 350, *this);
  
    
  scene->addItem(c1);
  scene->addItem(h);
  scene->addItem(g1);
  scene->addItem(g2);
  scene->addItem(b);
  scene->addItem(w1);
  scene->addItem(s);
  scene->addItem(a);
  scene->addItem(t1);
  scene->addItem(t2);
 
  
  htimer2 = new QTimer();
  htimer2->setInterval(1);
  connect(htimer2, SIGNAL(timeout()), this, SLOT(handleTimer2()));
  htimer2->start();
    
 }
 
 /** Represents the set up for level 3
 */
void GraphicWindow::level3()
{ 
  htimer->stop();
  htimer2->stop();
  scene->removeItem(c1);
  scene->removeItem(h);
  scene->removeItem(g1);
  scene->removeItem(g2);
  scene->removeItem(b);
  scene->removeItem(w1);
  if (!(b->starGone))
  {
    scene->removeItem(s);
  }
  scene->removeItem(a);
  scene->removeItem(t1);
  scene->removeItem(t2);
  water1 = new QPixmap ("images/w3.png");
  course1 = new QPixmap ("images/hole3.png");
  barge = new QPixmap ("images/barge.png");
  
  c1 = new CourseOne(course1, 0, 0);
  w1 = new Water1(water1, 0, 0);
  g1 = new Gopher(gopher, 255, 160, *this);
  g2 = new Gopher(gopher, 500, 160, *this);
  g3 = new Gopher(gopher, 370, 160, *this);
  h = new Hole(hole, 345, 20, *this);
  b = new Ball(ball, 400, 675, *this);
  s = new Star(star, 340, 125);
  a = new Arrow(arrow, b->getx()-20, b->gety()+15, *this);
  t1 = new Tile(tile1, 310, 600, *this);
  t2 = new Tile(tile1, 465, 450, *this);
  brg = new Barge(barge, 390, 335, *this);
  
    
  scene->addItem(c1);
  scene->addItem(h);
  scene->addItem(g1);
  scene->addItem(g2);
  scene->addItem(g3);
  
  scene->addItem(w1);
  scene->addItem(s);
  scene->addItem(a);
  scene->addItem(t1);
  scene->addItem(t2);
  scene->addItem(brg);
  scene->addItem(b);
  s->setParent(this);
  
  htimer3 = new QTimer();
  htimer3->setInterval(1);
  connect(htimer3, SIGNAL(timeout()), this, SLOT(handleTimer3()));
  htimer3->start();
    
  

 }
  

/** Show method to display the GraphicWindow Object
 */
void GraphicWindow::show() {
    
    this->show();
}

void GraphicWindow::mousePressEvent (QGraphicsSceneMouseEvent* event) 
{
  cout << "Event" << endl;
  event = event;
  m->setFocus();
}


/** Default Destructor
 */
GraphicWindow::~GraphicWindow()
{
    //delete item;
    //delete scene;
}

/** Clears the board and displays the score
 */
void GraphicWindow::endGame(int n)
{ 
  if (level == 1)
  {
    scene->removeItem(c1);
    scene->removeItem(h);
    scene->removeItem(g1);
    scene->removeItem(w1);
    if (!(b->starGone))
    {
      scene->removeItem(s);
    }
    scene->removeItem(a);
    scene->removeItem(t1);
    scene->removeItem(b);
  }
  if (level == 2)
  {
    scene->removeItem(c1);
    scene->removeItem(h);
    scene->removeItem(g1);
    scene->removeItem(g2);
    scene->removeItem(w1);
    if (!(b->starGone))
    {
      scene->removeItem(s);
    }
    scene->removeItem(a);
    scene->removeItem(t1);
    scene->removeItem(t2);
    scene->removeItem(b);
  }
  if (level == 3)
  {
    scene->removeItem(c1);
    scene->removeItem(h);
    scene->removeItem(g1);
    scene->removeItem(g2);
    scene->removeItem(g3);
    scene->removeItem(w1);
    if (!(b->starGone))
    {
      scene->removeItem(s);
    }
    scene->removeItem(a);
    scene->removeItem(t1);
    scene->removeItem(t2);
    scene->removeItem(b);
    scene->removeItem(brg);

  }
  int finalscore = 0;
  int diff = 25 - strokes;
  
    
  
  if (diff == 0)
  {
    finalscore = points+1000;
  }
  else if (diff < 0)
  {
    finalscore = points;
  }
  else if (diff > 0)
  {
    finalscore = points+(1000*diff);
  }
  if (n == 1)
    finalscore = points;
  
  if (n == 0)
  {
    course1 = new QPixmap ("images/winner.png");
    c1 = new CourseOne(course1,0,0);
    scene->addItem(c1);
    QString str;
    str.setNum(finalscore);
    QMessageBox::information(this, "Score", str);
    m->close();
  }
  if (n == 1)
  {
    course1 = new QPixmap ("images/loser.png");
    c1 = new CourseOne(course1,0,0);
    scene->addItem(c1);
    QString str;
    str.setNum(finalscore);
    QMessageBox::information(this, "Score", str);
  }
  
  ofstream ofile;
  ofile.open("highscores.txt");
  
  Player *temp = new Player(m->name2, finalscore);
  int j = 0;
  for (j = 0; j < m->scores.size(); j++)
  {
    if (finalscore > m->scores[j]->score)
      break;
  } 
  m->scores.insert(m->scores.begin()+j, temp);
  
  
  for (int i = 0; i < m->scores.size(); i++)
  {
    ofile << m->scores[i]->name << " " << m->scores[i]->score << endl;
  }
}
  


/** Timer for level 1
 */
void GraphicWindow::handleTimer()
{
  count++;
  if (count%4001 == 0)
  {
    h->move();
  }
  if (count%2501 == 0)
  {
    g1->move();
    s->move();
  }
  if (count % 11 == 0)
  {
    t1->move();
  }
}

/** Timer for level 2
 */
void GraphicWindow::handleTimer2()
{
  count++;
  if (count%3001 == 0)
  {
    h->move();
  }
  if (count%1501 == 0)
  {
    g1->move();
    g2->move();
    s->move();
  }
  if (count % 11 == 0)
  {
    t1->move();
    t2->move();
  }
}

/** Timer for level 3
 */
void GraphicWindow::handleTimer3()
{
  count++;
  if (count%2001 == 0)
  {
    h->move();
  }
  if (count%501 == 0)
  {
    g1->move();
    g2->move();
    g3->move();
    s->move();
  }
  if (count % 11 == 0)
  {
    t1->move();
    t2->move();
    brg->move();
  }
}


