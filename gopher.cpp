#include "gopher.h"
#include "graphicwindow.h"
#include <iostream>
/** Init A Gopher object to represent a gopher. Inherits from Thing
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 *  @param gw a reference to a GraphicWindow to move the gopher around it and interact with other objects
 */
Gopher::Gopher(QPixmap* pm, int nx, int ny, GraphicWindow &gw) : Thing(pm, nx, ny)
{
  setPixmap(*pm);
  srand(time(0));
  g = &gw;
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
  generateMove();
  x = g->h->x+x;
  y = g->h->y+y;
  if (!(((x > 150) && (x < 675)) && ((y > 0) && (y < 260))))
    move();
  setPos(x, y);
}

void Gopher::generateMove()
{
  x = (rand()%200-100);
  y = (rand()%200-100);
}
  


/** Default destructor
 */
Gopher::~Gopher()
{
    
}

