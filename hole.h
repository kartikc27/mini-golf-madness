#ifndef HOLE_H
#define HOLE_H


#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "thing.h"
#include <ctime>

class GraphicWindow;

using namespace std;
/**
 * A Hole class to represent the golf hole
*/
class Hole : public QObject, public Thing 
{
  Q_OBJECT
    
public:
  Hole(QPixmap* pm, int, int, GraphicWindow&);
  ~Hole();
  void show();
  void move();
  void generateMove();
  QPixmap* pixMap;

    
private:  
  GraphicWindow* g;

};

#endif 
