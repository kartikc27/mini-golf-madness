#include "barge.h"
#include "graphicwindow.h"
#include "mainwindow.h"
#include <iostream>

/** Init A barge object to represent a barge. This object moves in level 3 to carry a ball across the water
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 *  @param gw a reference to a GraphicWindow to move the hole around the scene
 */
Barge::Barge(QPixmap* pm, int nx, int ny, GraphicWindow &gw) : Thing(pm, nx, ny)
{
  g = &gw;
  setPixmap(*pm);
  reverse = false;
}

/** 
*  Function to show the object
*/
  
void Barge::show() {
    
    this->show();
}

/** 
*  Function to move the object back and forth across the water
*/
void Barge::move()
{
  if (y == 250)
  {
    reverse = true;
  }
  if (y == 335)
  {
    reverse = false;
  }
  if (reverse == false)
  {
    y = y-1;
    setPos(x, y);
  }
  else if (reverse == true)
  {
    y = y+1;
    setPos(x,y);
  }
}


/** Default destructor
 */
Barge::~Barge()
{
    
}

