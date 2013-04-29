#include "nameline.h"
/** A constructor for the nameLine class that inits a nameLine object 
 *  with a QLineEdit to enter the name
 */
nameLine::nameLine()  
{
  layout = new QFormLayout();
  setLayout(layout);
  nameEdit = new QLineEdit();
  layout->addRow("Name: ", nameEdit);
}

/** function to show the object
 */
void nameLine::show() {
    
    this->show();
}

/** A getter function to return the text inputted into the QLineEdit object
 */
QString nameLine::get_name()
{
  return nameEdit->text();
}

/** Default destructor
 */
nameLine::~nameLine()
{
    
}


