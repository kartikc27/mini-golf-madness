#include "tile.h"
#include "graphicwindow.h"
#include "mainwindow.h"
#include <iostream>
/** Init A tile object to represent a moving block. This object back and forth across an area of the course.
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 *  @param gw a reference to a GraphicWindow to move the tile around the scene
 */
Tile::Tile(QPixmap* pm, int nx, int ny, GraphicWindow &gw) : Thing(pm, nx, ny)
{
  g = &gw;
  setPixmap(*pm);
  srand(time(0));
  reverse = false;
}

  /** 
*  Function to show the object
*/
void Tile::show() {
    
    this->show();
}

/** 
*  Function to move the object back and forth in a given area
*/
void Tile::move()
{
  if (x == 465)
  {
    reverse = true;
  }
  if (x == 310)
  {
    reverse = false;
  }
  if (reverse == false)
  {
    x = x+1;
    setPos(x, y);
    if ((collidesWithItem(g->b, Qt::IntersectsItemBoundingRect)) && (g->b->still))
    {
      g->b->setPos(x+60, g->b->gety());
      g->a->setPos(g->b->getx()-20, g->b->gety()+15);
      if (g->b->collidesWithItem(g->w1, Qt::IntersectsItemShape))
      {
        g->lives -= 1;
        g->m->gt->updateLives();
        g->strokes+=1;
        g->m->gt->updateStrokes();
        g->b->delay(); 
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
        g->b->x = 400;
        g->b->y = 675;
        g->a->setPos(g->b->getx()-20, g->b->gety()+15);
      }
    }
  }
  else if (reverse == true)
  {
    x = x-1;
    setPos(x,y);
    if ((collidesWithItem(g->b, Qt::IntersectsItemBoundingRect)) && (g->b->still))
    {
      g->b->setPos(x-30, g->b->gety());
     
      g->a->setPos(g->b->getx()-20, g->b->gety()+15);
      if (g->b->collidesWithItem(g->w1, Qt::IntersectsItemShape))
      {
        g->lives -= 1;
        g->m->gt->updateLives();
        g->m->gt->updateStrokes();
        g->strokes+=1;
        g->b->delay(); 
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
        g->b->x = 400;
        g->b->y = 675;
        g->a->setPos(g->b->getx()-20, g->b->gety()+15);
      }
    }  
  }
  
}


/** Default destructor
 */
Tile::~Tile()
{
    
}

