#ifndef WATER_H
#define WATER_H


#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "thing.h"
/**
 * A water class to represent the water hazard area surrounding the hole
*/

using namespace std;

class Water1 : public QObject, public Thing 
{
    Q_OBJECT
    
public:
    Water1(QPixmap* pm, int, int);
    ~Water1();
    void show();
    Water1* pixMap;

    
private:  
 


};

#endif 
