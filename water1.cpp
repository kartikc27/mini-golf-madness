#include "water1.h"
#include <iostream>

/** Init A Water1 object that represents the water hazard on each level. This object does not move
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 *  @param gw a reference to a GraphicWindow to set the hole in the scene and check interactions
 */
Water1::Water1(QPixmap* pm, int nx, int ny) : Thing(pm, nx, ny)
{
  setPixmap(*pm);
}


/** 
*  Function to show the object
*/
void Water1::show() {
    
    this->show();
}

/** Default destructor
 */
Water1::~Water1()
{
    
}

