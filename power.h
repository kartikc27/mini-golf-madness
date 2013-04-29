#ifndef POWER_H
#define POWER_H

#include <QWidget>
#include <QSlider>
#include <QLCDNumber>
#include <QPushButton>
#include "graphicwindow.h"

/**
 * A power class to represent the power of each shot. This is determined by a slider
*/

 using namespace std;

class QSlider;

class Power : public QWidget
{
  Q_OBJECT

  public:
    explicit Power(GraphicWindow &gw);
    ~Power();
    int value() const;
    void show();
  
  public slots:
    void setValue(int value);
    void setRange(int minValue, int maxValue);


  signals:
     void valueChanged(int newValue);

 private:
   QSlider *slider;
   GraphicWindow *g;
};

#endif
