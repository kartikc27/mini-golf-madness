#ifndef BARGE_H
#define BARGE_H

#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "thing.h"
#include <ctime>
#include <QMessageBox>
/**
 * An barge class used to represent the object in level 3 to move the ball across the water
*/

class GraphicWindow;
class MainWindow;
using namespace std;

class Barge : public QObject, public Thing 
{
    Q_OBJECT
    
public:
    Barge(QPixmap* pm, int, int, GraphicWindow&);
    ~Barge();
    void show();
    void move();
    QPixmap* pixMap;
    bool reverse;
    GraphicWindow *g;

private:  
 


};

#endif 
