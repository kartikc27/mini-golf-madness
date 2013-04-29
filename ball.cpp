#include "ball.h"
#include <iostream>
#include <cmath>
#include "graphicwindow.h"
#include "mainwindow.h"
#define PI 3.14159265

#include "ball.h"
#include <iostream>
#include <cmath>
#include "graphicwindow.h"
#include "mainwindow.h"
#define PI 3.14159265

/** Init A Ball object to represent a golf ball. Inherits from Thing
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 *  @param gw a reference to a GraphicWindow to move the ball around it and interact with other objects
 */
Ball::Ball(QPixmap* pm, int nx, int ny, GraphicWindow &gw) : Thing(pm, nx, ny)
{
  setPixmap(*pm);
  g = &gw;
  starGone = false;
  still = true;
  initCollision = false;
}

/** Function to move a ball
 *  Checks for collisions with all the other objects
 */
void Ball::move()
{ 
  x += vX;
  y -= vY;
  setPos(x, y);
  still = false;
  if (collidesWithItem(g->h, Qt::IntersectsItemShape))
  {
    if (g->level == 1)
      g->htimer->stop();
    else if (g->level == 2)
      g->htimer2->stop();
    else if (g->level == 3)
      g->htimer3->stop();
      
    timer->stop();
    setPos(g->h->getx()+56, g->h->gety()+50);
    g->level += 1;
    QMessageBox msgBox;
    msgBox.setText ("Hole Complete");
    msgBox.exec();
    
    
    if (g->level == 2)
      g->level2();
    if (g->level == 3)
      g->level3();
    if (g->level == 4)
    {
      g->endGame(0);
    }

  }
  
  if (g->level == 1)
  {
  if (collidesWithItem(g->g1, Qt::IntersectsItemShape))
  {
    if (g->level == 1)
      g->htimer->stop();
    else if (g->level == 2)
      g->htimer2->stop();
    else if (g->level == 3)
      g->htimer3->stop();
      
    timer->stop();
    still = true;
    g->lives -= 1;
    g->m->gt->updateLives();
    g->strokes += 1;
    g->m->gt->updateStrokes();
    if (g->lives == 0)
    {
      QMessageBox msgBox;
      msgBox.setText ("Game Over");
      msgBox.exec();
      g->endGame(1);
      return;
    }
    QMessageBox msgBox;
    msgBox.setText ("Scumbag Gopher..." );
    msgBox.exec();
    setPos(400, 675);
    x = 400;
    y = 675;
    g->a->setPos(getx()-20, gety()+15);
    if (g->level == 1)
      g->htimer->start();
    else if (g->level == 2)
      g->htimer2->start();
    else if (g->level == 3)
      g->htimer3->start();
    
  }
  }
  
  if (g->level == 2)
  {
  if ((collidesWithItem(g->g1, Qt::IntersectsItemShape)))
  {
    if (g->level == 1)
      g->htimer->stop();
    else if (g->level == 2)
      g->htimer2->stop();
    else if (g->level == 3)
      g->htimer3->stop();
      
    timer->stop();
    still = true;
    g->lives -= 1;
    g->m->gt->updateLives();
    g->strokes += 1;
    g->m->gt->updateStrokes();
    if (g->lives == 0)
    {
      QMessageBox msgBox;
      msgBox.setText ("Game Over");
      msgBox.exec();
      g->endGame(1);
      return;
    }
    QMessageBox msgBox;
    msgBox.setText ("Scumbag Gopher..." );
    msgBox.exec();
    setPos(400, 675);
    x = 400;
    y = 675;
    g->a->setPos(getx()-20, gety()+15);
    if (g->level == 1)
      g->htimer->start();
    else if (g->level == 2)
      g->htimer2->start();
    else if (g->level == 3)
      g->htimer3->start();
    
  }
  if ((collidesWithItem(g->g2, Qt::IntersectsItemShape)))
  {
    if (g->level == 1)
      g->htimer->stop();
    else if (g->level == 2)
      g->htimer2->stop();
    else if (g->level == 3)
      g->htimer3->stop();
      
    timer->stop();
    still = true;
    g->lives -= 1;
    g->m->gt->updateLives();
    g->strokes += 1;
    g->m->gt->updateStrokes();
    if (g->lives == 0)
    {
      QMessageBox msgBox;
      msgBox.setText ("Game Over");
      msgBox.exec();
      g->endGame(1);
      return;
    }
    QMessageBox msgBox;
    msgBox.setText ("Scumbag Gopher..." );
    msgBox.exec();
    setPos(400, 675);
    x = 400;
    y = 675;
    g->a->setPos(getx()-20, gety()+15);
    if (g->level == 1)
      g->htimer->start();
    else if (g->level == 2)
      g->htimer2->start();
    else if (g->level == 3)
      g->htimer3->start();
    
  }
  }
  
  if (g->level == 3)
  {
  if ((collidesWithItem(g->g1, Qt::IntersectsItemShape)) )
  {
    if (g->level == 1)
      g->htimer->stop();
    else if (g->level == 2)
      g->htimer2->stop();
    else if (g->level == 3)
      g->htimer3->stop();
      
    timer->stop();
    still = true;
    g->lives -= 1;
    g->m->gt->updateLives();
    g->strokes += 1;
    g->m->gt->updateStrokes();
    if (g->lives == 0)
    {
      QMessageBox msgBox;
      msgBox.setText ("Game Over");
      msgBox.exec();
      g->endGame(1);
      return;
    }
    QMessageBox msgBox;
    msgBox.setText ("Scumbag Gopher..." );
    msgBox.exec();
    setPos(400, 675);
    x = 400;
    y = 675;
    g->a->setPos(getx()-20, gety()+15);
    if (g->level == 1)
      g->htimer->start();
    else if (g->level == 2)
      g->htimer2->start();
    else if (g->level == 3)
      g->htimer3->start();
    
  }
  if ((collidesWithItem(g->g2, Qt::IntersectsItemShape)) )
  {
    if (g->level == 1)
      g->htimer->stop();
    else if (g->level == 2)
      g->htimer2->stop();
    else if (g->level == 3)
      g->htimer3->stop();
      
    timer->stop();
    still = true;
    g->lives -= 1;
    g->m->gt->updateLives();
    g->strokes += 1;
    g->m->gt->updateStrokes();
    if (g->lives == 0)
    {
      QMessageBox msgBox;
      msgBox.setText ("Game Over");
      msgBox.exec();
      g->endGame(1);
      return;
    }
    QMessageBox msgBox;
    msgBox.setText ("Scumbag Gopher..." );
    msgBox.exec();
    setPos(400, 675);
    x = 400;
    y = 675;
    g->a->setPos(getx()-20, gety()+15);
    if (g->level == 1)
      g->htimer->start();
    else if (g->level == 2)
      g->htimer2->start();
    else if (g->level == 3)
      g->htimer3->start();
    
  }
  if ((collidesWithItem(g->g3, Qt::IntersectsItemShape)) )
  {
    if (g->level == 1)
      g->htimer->stop();
    else if (g->level == 2)
      g->htimer2->stop();
    else if (g->level == 3)
      g->htimer3->stop();
      
    timer->stop();
    still = true;
    g->lives -= 1;
    g->m->gt->updateLives();
    g->strokes += 1;
    g->m->gt->updateStrokes();
    if (g->lives == 0)
    {
      QMessageBox msgBox;
      msgBox.setText ("Game Over");
      msgBox.exec();
      g->endGame(1);
      return;
    }
    QMessageBox msgBox;
    msgBox.setText ("Scumbag Gopher..." );
    msgBox.exec();
    setPos(400, 675);
    x = 400;
    y = 675;
    g->a->setPos(getx()-20, gety()+15);
    if (g->level == 1)
      g->htimer->start();
    else if (g->level == 2)
      g->htimer2->start();
    else if (g->level == 3)
      g->htimer3->start();
    
  }
  }
  
  if (g->level == 3)
  {
     if ((collidesWithItem(g->brg, Qt::IntersectsItemShape)) && (!initCollision))
     {
         initCollision = true;
         g->htimer3->stop();
         timer->stop();
         while (g->brg->y > 250)
         {
           g->brg->y -= 1;
           g->brg->setPos(g->brg->x, g->brg->y);
           y -= 2;
           setPos(x, y);
           delay();
         }
         g->a->setPos(getx()-20, gety()+15);
         g->htimer3->start();
         timer->start();
       }
  }
  
  
  if (collidesWithItem(g->w1, Qt::IntersectsItemShape))
  {
    if (g->level == 1)
      g->htimer->stop();
    else if (g->level == 2)
      g->htimer2->stop();
    else if (g->level == 3)
      g->htimer3->stop();
    timer->stop();
    still = true;
    g->lives -= 1;
    g->m->gt->updateLives();
    g->strokes += 1;
    g->m->gt->updateStrokes();
    if (g->lives == 0)
    {
      QMessageBox msgBox;
      msgBox.setText ("Game Over");
      msgBox.exec();
      g->endGame(1);
      return;
    }
    delay(); 
    QMessageBox msgBox;
    msgBox.setText ("In the lake..." );
    msgBox.exec();
    setPos(400, 675);
    x = 400;
    y = 675;
    g->a->setPos(getx()-20, gety()+15);
    if (g->level == 1)
      g->htimer->start();
    else if (g->level == 2)
      g->htimer2->start();
    else if (g->level == 3)
      g->htimer3->start();  
  }
  
  
  
  if (!starGone)
  {
    if (collidesWithItem(g->s, Qt::IntersectsItemShape))
    {
      g->points += 500;
      g->m->gt->updateScore();
      g->scene->removeItem(g->s);
      starGone = true;
    }
  }
  
  if (collidesWithItem(g->t1, Qt::IntersectsItemShape))
  {
    timer->stop();
    if (((abs(g->a->rotation - 360) - 90) > 15) && (((abs((g->a->rotation) - 360) - 270) > 15))) 
    {  
      
      vY = vY*-1;
      
      while ((abs(vX) >= 10) || (abs(vY) >= 10))
      {
        delay();
        delay();
        x += vX;
        y -= vY;
        
        setPos(x, y);
        vX = vX - (.05*vX);
        vY = vY - (.05*vY);
        
        if (collidesWithItem(g->w1, Qt::IntersectsItemShape))
        {
          still = true;
          g->lives -= 1;
          g->m->gt->updateLives();
          g->strokes+=1;
          g->m->gt->updateStrokes();
          QMessageBox msgBox;
          msgBox.setText ("In the lake..." );
          msgBox.exec();
          if (g->lives == 0)
    	  {
      		QMessageBox msgBox;
      		msgBox.setText ("Game Over");
      		msgBox.exec();
      		g->endGame(1);
      		return;
     	  }
          g->b->setPos(400, 675);
          x = 400;
          y = 675;
          g->a->setPos(x-20, y+15);
          vX = 1; 
          vY = 1; 
        }
      }
    } 
    else
    { 
      vX = vX*-1;
      while ((abs(vX) >= 10) || (abs(vY) >= 10))
      {
        delay();
        delay();
        x += vX;
        y -= vY;
        setPos(x, y);
        vX = vX - (.05*vX);
        vY = vY - (.05*vY);
        if (collidesWithItem(g->w1, Qt::IntersectsItemShape))
        {
          still = true;
          g->lives -= 1;
          g->m->gt->updateLives();
          g->strokes+=1;
          g->m->gt->updateStrokes();
          delay(); 
          QMessageBox msgBox;
          msgBox.setText ("In the lake..." );
          msgBox.exec();
          if (g->lives == 0)
    	  {
      		QMessageBox msgBox;
      		msgBox.setText ("Game Over");
      		msgBox.exec();
      		g->endGame(1);
      		return;
     	  }
          setPos(400, 675);
          x = 400;
          y = 675;
          g->a->setPos(x-20, y+15);
        }
      }
    }
      
   }
   
  if (g->level == 2)
  {
  if (collidesWithItem(g->t2, Qt::IntersectsItemShape))
  {
    timer->stop();
    if (((abs(g->a->rotation - 360) - 90) > 15) && (((abs((g->a->rotation) - 360) - 270) > 15))) 
    {  
      
      vY = vY*-1;
      
      while ((abs(vX) >= 10) || (abs(vY) >= 10))
      {
        delay();
        delay();
        x += vX;
        y -= vY;
        
        setPos(x, y);
        vX = vX - (.05*vX);
        vY = vY - (.05*vY);
        
        if (collidesWithItem(g->w1, Qt::IntersectsItemShape))
        {
          still = true;
          g->lives -= 1;
          g->m->gt->updateLives();
          g->strokes+=1;
          g->m->gt->updateStrokes();
          QMessageBox msgBox;
          msgBox.setText ("In the lake..." );
          msgBox.exec();
          if (g->lives == 0)
    	  {
      		QMessageBox msgBox;
      		msgBox.setText ("Game Over");
      		msgBox.exec();
      		g->endGame(1);
      		return;
     	  }
          g->b->setPos(400, 675);
          x = 400;
          y = 675;
          g->a->setPos(x-20, y+15);
          vX = 1; 
          vY = 1; 
        }
      }
    } 
    else
    { 
      vX = vX*-1;
      while ((abs(vX) >= 10) || (abs(vY) >= 10))
      {
        delay();
        delay();
        x += vX;
        y -= vY;
        setPos(x, y);
        vX = vX - (.05*vX);
        vY = vY - (.05*vY);
        if (collidesWithItem(g->w1, Qt::IntersectsItemShape))
        {
          still = true;
          g->lives -= 1;
          g->m->gt->updateLives();
          g->strokes+=1;
          g->m->gt->updateStrokes();
          delay(); 
          QMessageBox msgBox;
          msgBox.setText ("In the lake..." );
          msgBox.exec();
          if (g->lives == 0)
    	  {
      		QMessageBox msgBox;
      		msgBox.setText ("Game Over");
      		msgBox.exec();
      		g->endGame(1);
      		return;
     	  }
          setPos(400, 675);
          x = 400;
          y = 675;
          g->a->setPos(x-20, y+15);
        }
      }
    }
      
   }
   }
  
  vX = vX - (.05*vX);
  vY = vY - (.05*vY);
  if ((abs(vX) <= 10) && (abs(vY) <= 10))
  { 
    still = true;
    delay();
    timer->stop();
    g->a->setPos(getx()-20, gety()+15);
    g->m->setFocus();
  }
  
 
}

  
/** 
*  function to show the object
*/
void Ball::show() 
{   
    this->show();
}

/** A function used to set up each move of the ball by taking into account the aim and power
 *  @param v a double representing the velocity
 *  @param a a double representing the angle
 */
void Ball::setMove(double v, double a)
{
  velocity = .50*v;
  double angle = a;
  double rad = (PI*angle)/180;
  vY = velocity*cos(rad);
  vX = velocity*sin(rad);
  timer = new QTimer(this);
  timer->setInterval(40);
  timer->start();
  connect(timer, SIGNAL(timeout()), this, SLOT(handleTimer()));
}

/** 
 * handles cases when the timer times out every 40 ticks to create an animated effect
 */
void Ball::handleTimer()
{
  move();
}

/** 
 * creates a .5 second delay
 */
void Ball::delay()
{
    QTime dieTime = QTime::currentTime().addSecs(.5);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);    
}

//default destructor
Ball::~Ball()
{
    
}
