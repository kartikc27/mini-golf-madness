#ifndef STAR_H
#define STAR_H

#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "thing.h"
#include <ctime>

/**
 * A Star class to represent stars on the board. Acquiring these objects increases the user's score 
 * Stars move randomly.
*/
using namespace std;

class Star : public QObject, public Thing 
{
    Q_OBJECT
    
public:
    Star(QPixmap* pm, int, int);
    ~Star();
    void show();
    void move();
    QPixmap* pixMap;

    
private:  
 


};

#endif 
