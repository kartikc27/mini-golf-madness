#include "hole.h"
#include "graphicwindow.h"
#include <iostream>


/** Init A hole object to represent a golf hole. This object moves randomly.
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 *  @param gw a reference to a GraphicWindow to move the hole around it and interact with other objects
 */
Hole::Hole(QPixmap* pm, int nx, int ny, GraphicWindow& gw) : Thing(pm, nx, ny)
{
  setPixmap(*pm);
  srand(time(0));
  g = &gw;
}


/** 
*  Function to show the object
*/
void Hole::show() 
{
    
    this->show();
}

/** 
*  Function to move the object randomly in a given area
*/
void Hole::move()
{
  generateMove();
  setPos(x, y);
}

void Hole::generateMove()
{
  x = (rand()%400-200) + 345;
  y = (rand()%150-20) + 20;
  while (true)
  {
    if ((abs(x - g->b->x) <= 150) || (abs(y - g->b->y) <= 50))
    { 
      x = (rand()%400-200) + 345;
      y = (rand()%150-20) + 20;
    }
    else
    {
      break;
    }
  }  
}

/** Default destructor
 */
Hole::~Hole()
{
    
}

