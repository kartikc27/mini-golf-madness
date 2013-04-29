#include "courseone.h"
#include <iostream>

/** Init A CourseOne object to represent a golf hole layout. This object does not move
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 *  @param gw a reference to a GraphicWindow
 */
CourseOne::CourseOne(QPixmap* pm, int nx, int ny) : Thing(pm, nx, ny)
{
  setPixmap(*pm);
}


/** 
*  Function to show the object
*/
void CourseOne::show() {
    
    this->show();
}

/** Default destructor
 */
CourseOne::~CourseOne()
{
    
}

