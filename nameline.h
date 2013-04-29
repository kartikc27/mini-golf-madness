#ifndef NAMELINE_H
#define NAMELINE_H


#include <QGraphicsView>
#include <QFormLayout>
#include <QLineEdit>
#include <QWidget>
/** 
 * This class represents the nameLine to input a name
*/
using namespace std;

class nameLine : public QWidget {
    Q_OBJECT
    
public:
    explicit nameLine();
    ~nameLine();
    void show();
    QString get_name();
    
private:
    QFormLayout *layout;
    QLineEdit *nameEdit;
    
public slots:

};

#endif 
