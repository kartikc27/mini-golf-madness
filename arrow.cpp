#include "arrow.h"
#include "graphicwindow.h"
#include "mainwindow.h"
#include <iostream>
/** Init An arrow object to represent an arrow that the user uses to aim
 *  @param pm a pointer to a QPixmapItem to set the image
 *  @param nx an integer to represent the x coordinate
 *  @param ny an integer to represent the y coordinate
 *  @param gw a reference to a GraphicWindow to move the arrow around in the scene
 */
Arrow::Arrow(QPixmap* pm, int nx, int ny, GraphicWindow& gw) : Thing(pm, nx, ny)
{
  g = &gw;
  setPixmap(*pm);
  pixMap = pm;
  rotation = 0;
  setTransformOriginPoint(32.5, 0);
}

/** 
*  Function to show the object
*/
void Arrow::show() 
{
    this->show();
}

/** 
*  Function to rotate the arrow to the right
*/
void Arrow::rotateRight()
{
  rotation += 5;
  setRotation(rotation);

}

/** 
*  Function to rotate the arrow to the left
*/
void Arrow::rotateLeft()
{
  rotation -= 5;
  setRotation(rotation);
}

/** 
*  Function to set the focus of the arrow in case it is lost
*  @param event the name of a pointer to a QGraphicsSceneMouseEvent to detect mouse clicks
*/
void Arrow::mousePressEvent (QGraphicsSceneMouseEvent* event) 
{
  event = event;
  g->m->setFocus();
}

/** Default destructor
 */
Arrow::~Arrow()
{
    
}

