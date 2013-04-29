#include "gopher.h"
#include <iostream>
/** Init A Gopher object to represent a gopher. Inherits from Thing
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 *  @param gw a reference to a GraphicWindow to move the gopher around it and interact with other objects
 */
Gopher::Gopher(QPixmap* pm, int nx, int ny) : Thing(pm, nx, ny)
{
  setPixmap(*pm);
  srand(time(0));
}


/** Function to show the object
 */
void Gopher::show() {
    
    this->show();
}

/** Moves the object randomly in a given area
 */
void Gopher::move()
{
  x = (rand()%400-200) + 345;
  y = (rand()%150-20) + 20;
  setPos(x, y);
}


/** Default destructor
 */
Gopher::~Gopher()
{
    
}

