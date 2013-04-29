#ifndef COURSEONE_H
#define COURSEONE_H


#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "thing.h"

using namespace std;
/**
 * A course class to represent the layout of each level
*/

class CourseOne : public QObject, public Thing 
{
    Q_OBJECT
    
public:
    CourseOne(QPixmap* pm, int, int);
    ~CourseOne();
    void show();
    QPixmap* pixMap;

    
private:  
 


};

#endif 
