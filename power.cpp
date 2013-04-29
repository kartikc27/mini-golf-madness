#include <QHBoxLayout>
#include "power.h"
#include <QLabel>
#include <iostream>

/** Init Power object to set the power of each shot. This is done by using a slider
 *  @param gw a reference to a GraphicWindow to move the arrow around the scene
 */

Power::Power(GraphicWindow& gw) 
{
  g = &gw;
  QLabel *pw = new QLabel("          POWER          ");
  QLCDNumber *lcd = new QLCDNumber(2);
  lcd->setSegmentStyle(QLCDNumber::Flat);
  QHBoxLayout *layout = new QHBoxLayout;
  slider = new QSlider(Qt::Horizontal);
  slider->setRange(0, 99);
  slider->setValue(50);
  lcd->display(value());

  layout->addWidget(pw);
  layout->addWidget(slider);
  layout->addWidget(lcd);
  
  connect(slider, SIGNAL(valueChanged(int)), lcd, SLOT(display(int)));
  connect(slider, SIGNAL(valueChanged(int)), this, SIGNAL(valueChanged(int)));
 

  setLayout(layout);
  
  setFocusProxy(slider);
}
  

/** 
*  Function to show the object
*/
void Power::show()
{
  this->show();
}

/** 
*  Function to return the value of the slider
*/
int Power::value() const
{
  return slider->value();
}

/** 
*  Function to set the value of the slider
*  @param value the name of an int to set the value to
*/
void Power::setValue(int value)
{
  slider->setValue(value);
}

/** 
*  Function to set the range of the slider
*  @param minValue the name of an int representing the minimum value of the slider
*  @param maxValue the name of an int representing the maximum value of the slider
*/
void Power::setRange(int minValue, int maxValue)
{
  if (minValue < 0 || maxValue > 99 || minValue > maxValue) 
  {
    qWarning("LCDRange::setRange(%d, %d)\n" "\tRange must be 0..99\n" "\tand minValue must not be greater than maxValue", minValue, maxValue);
    return;
  }
  slider->setRange(minValue, maxValue);
}

/** 
*  Default Destructor
*/
Power::~Power()
{

}
 
 
 
