#ifndef GAMETRACKER_H
#define GAMETRACKER_H

#include <QLabel>
#include <QWidget>
#include <QLineEdit>
#include <QLCDNumber>
#include "graphicwindow.h"
 
using namespace std;
/**
 * A class to display the lives, the strokes, and the score using QLCDNumber items
*/

class GameTracker : public QWidget
{
  Q_OBJECT

  public:
  
    explicit GameTracker(GraphicWindow &gw);
    ~GameTracker();
    void show();
    void updateScore();
    void updateLives();
    void updateStrokes();
    QLCDNumber* lcd1;
    QLCDNumber* lcd2;
    QLCDNumber* lcd3;
 private:
   GraphicWindow *g;
   
};

#endif
