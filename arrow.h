#ifndef ARROW_H
#define ARROW_H


#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "thing.h"
#include <QGraphicsRotation>
#include <QKeyEvent>
/**
 * An arrow class to represent the arrow object used to aim the golf ball
*/

using namespace std;

class GraphicWindow;
class MainWindow;

class Arrow : public QObject, public Thing 
{
  Q_OBJECT
    
public:
  Arrow(QPixmap* pm, int, int, GraphicWindow&);
  ~Arrow();
  void show();
  void rotateRight();
  void rotateLeft();
  QPixmap* pixMap;
  QPainter* painter; 
  QPixmap* rotatedPixmap;
  int rotation;
  void mousePressEvent (QGraphicsSceneMouseEvent* event);
   
   
private: 
  GraphicWindow* g;
  

public slots: 
 


};

#endif 
