#include "hole.h"
#include <iostream>


/** Init A hole object to represent a golf hole. This object moves randomly.
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 *  @param gw a reference to a GraphicWindow to move the hole around it and interact with other objects
 */
Hole::Hole(QPixmap* pm, int nx, int ny) : Thing(pm, nx, ny)
{
  setPixmap(*pm);
  srand(time(0));
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
  x = (rand()%400-200) + 345;
  y = (rand()%150-20) + 20;
  setPos(x, y);

}

/** Default destructor
 */
Hole::~Hole()
{
    
}

