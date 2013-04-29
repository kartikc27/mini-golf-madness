#include "star.h"
#include <iostream>

/** Init A Star object to represent a golf ball. Inherits from Thing
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 *  @param gw a reference to a GraphicWindow to move the star around it and interact with other objects
 */
Star::Star(QPixmap* pm, int nx, int ny) : Thing(pm, nx, ny)
{
  setPixmap(*pm);
}


/*Function to show the object*/
void Star::show() {
    
    this->show();
}

/** Moves the object randomly in a given area
 */
void Star::move()
{
  x = (rand()%400-200) + 345;
  y = (rand()%150-20) + 20;
  setPos(x, y);
}


/** Default destructor
 */
Star::~Star()
{
    
}

