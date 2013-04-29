#ifndef BALL_H
#define BALL_H


#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "thing.h"
#include <QGraphicsRectItem>
#include <QTimer>
#include <QTime>
#include <QCoreApplication>
#include <QEventLoop>
#include <QMessageBox>

class GraphicWindow;

/**
 * A ball class to represent a golf ball. Involves checking collisions
*/

using namespace std;

class Ball : public QObject, public Thing
{
    Q_OBJECT
    
public:
    Ball(QPixmap* pm, int, int, GraphicWindow &gw);
    ~Ball();
    void show();
    void move();
    QPixmap* pixMap;
    QTimer* timer;
    void setMove(double v, double a);
    void delay();
    bool still;
    bool starGone;
    bool initCollision;
    
public slots:
    void handleTimer();
    
private:  

    
    double velocity;
    GraphicWindow *g;
    

};

#endif 
