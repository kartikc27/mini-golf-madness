#ifndef THING_H
#define THING_H

#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>

/* A class that represents a general Thing with an x coord, y coord, x velocity, y velocity, constructor, and a move function */

class Thing: public QGraphicsPixmapItem 
{
  public:
    Thing (QPixmap *pm, int nx, int ny);
    int getx();
    int gety();
    //virtual void move() = 0; 
     int x;
    int y;
    double vX;
    double vY;

  private: 
   
    QPixmap *pixMap; 
};

#endif
