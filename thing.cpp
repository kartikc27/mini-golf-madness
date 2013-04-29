#include "thing.h"

/** A thing object to represent a general thing that other "things" inherit from
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 */
Thing::Thing( QPixmap* p, int nx, int ny ) 
{
  pixMap = p; //Handy to store separate to get image width/height, etc.
  setPixmap( *p ); //First Qt method that doesn’t take a pointer :->
  x = nx;
  y = ny;
  setPos( x, y ); //how you set the position
}

/*getter function for x*/
int Thing::getx()
{
  return x;
}

/*getter function for y*/
int Thing::gety()
{
  return y;
}
