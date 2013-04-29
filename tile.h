#ifndef TILE_H
#define TILE_H

#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "thing.h"
#include <ctime>
#include <QMessageBox>

/**
 * An tile class to represent moving blocks that create hindrances for the user
*/


class GraphicWindow;
class MainWindow;
using namespace std;

class Tile : public QObject, public Thing 
{
    Q_OBJECT
    
public:
    Tile(QPixmap* pm, int, int, GraphicWindow&);
    ~Tile();
    void show();
    void move();
    QPixmap* pixMap;
    bool reverse;
    GraphicWindow *g;


    
private:  
 


};

#endif 
