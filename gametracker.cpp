#include <QFormLayout>
#include <QHBoxLayout>
#include "gametracker.h"

#include <iostream>

/** Init a GameTracker object with a reference to GraphicWindow
 *  @param gw a referecne to a GraphicWindow to extract necessary data and display it
 */
GameTracker::GameTracker(GraphicWindow& gw) 
{
  g = &gw;
  QLabel *lives = new QLabel("Lives: ");
  lcd1 = new QLCDNumber(2, this);
  lcd1->setSegmentStyle(QLCDNumber::Flat);
  lcd1->display(g->lives);
  QHBoxLayout *layout1 = new QHBoxLayout;
  layout1->addWidget(lives);
  layout1->addWidget(lcd1);
  
  QLabel *score = new QLabel("Points: ");
  lcd2 = new QLCDNumber(4);
  lcd2->setSegmentStyle(QLCDNumber::Flat);
  lcd2->display(g->points);
  QHBoxLayout *layout2 = new QHBoxLayout;
  layout2->addWidget(score);
  layout2->addWidget(lcd2);
  
  QLabel *strokes = new QLabel("Strokes: ");
  lcd3 = new QLCDNumber(2);
  lcd3->setSegmentStyle(QLCDNumber::Flat);
  lcd3->display(g->strokes);
  QHBoxLayout *layout3 = new QHBoxLayout;
  layout3->addWidget(strokes);
  layout3->addWidget(lcd3);
  
  
  QFormLayout *layout = new QFormLayout;
  layout->addRow(layout1);
  layout->addRow(layout3);
  layout->addRow(layout2);
  setLayout(layout);
  
}

/** updates the lives LCDNumber
 */
void GameTracker::updateLives()
{
  lcd1->display(g->lives);;
  lcd1->show();
}

/** updates the score LCDNumber
 */
void GameTracker::updateScore()
{
  lcd2->display(g->points);
  lcd2->show();
}

/** updates the strokes LCDNumber
 */
void GameTracker::updateStrokes()
{
  lcd3->display(g->strokes);
  lcd3->show();
}
  
/** function to show the object
 */
void GameTracker::show()
{
  this->show();
}

/** default destructor
 */
GameTracker::~GameTracker()
{

}


