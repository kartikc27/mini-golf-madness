#ifndef GOPHER_H
#define GOPHER_H

#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "thing.h"
#include <ctime>
/**
 * A Gopher class to represent gophers. If a user hits a gopher, he or she loses a life.
 * These objects move randomly.
*/

using namespace std;

class Gopher : public QObject, public Thing 
{
    Q_OBJECT
    
public:
    Gopher(QPixmap* pm, int, int);
    ~Gopher();
    void show();
    void move();
    QPixmap* pixMap;

    
private:  
 


};

#endif 
