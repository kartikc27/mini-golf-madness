#ifndef GraphicWindow_H
#define GraphicWindow_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMessageBox>
#include <map>
#include <fstream>
#include "courseone.h"
#include "gopher.h"
#include "tile.h"
#include "hole.h"
#include "star.h"
#include "arrow.h"
#include "ball.h"
#include "water1.h"
#include "barge.h"


#define WINDOW_MAX_X 500
#define WINDOW_MAX_Y 400

/**
 * A GraphicWindow class to set up the gameplay. Contains set ups for three levels. 
*/

using namespace std;

class MainWindow;

class GraphicWindow : public QGraphicsView {
    Q_OBJECT
    
public:
    GraphicWindow(MainWindow &mw);
    ~GraphicWindow();
    void mousePressEvent (QGraphicsSceneMouseEvent* event);
    void show();
    void endGame(int);
    void level2();
    void level3();
    CourseOne* c1;
    Ball* b;
    Gopher* g1;
    Gopher* g2;
    Gopher* g3;
    Hole* h;
    Star* s;
    Arrow* a;
    Water1* w1;
    Water1* w2;
    Tile* t1;
    Tile* t2;
    Barge* brg;
    QPixmap* course1;
    QPixmap* gopher;
    QPixmap* ball;
    QPixmap* hole;
    QPixmap* star;
    QPixmap* arrow;
    QPixmap* water1;
    QPixmap* tile1;
    QPixmap* barge;
    QPixmap* water2;
    MainWindow* m;
    QGraphicsScene *scene;
    QTimer* htimer;
    QTimer* htimer2;
    QTimer* htimer3;
    
    int level;
    int lives;
    int points;
    int strokes;
private:
    int count;

public slots:
    void handleTimer();
    void handleTimer2();
    void handleTimer3();

    
    
};

#endif 
