#ifndef TOOLBAR_H
#define TOOLBAR_H
#include <QGraphicsView>
#include <QFormLayout>
#include <QToolBar>
#include <QAction>
#include <QDockWidget>
#include <cstring>

class MainWindow;


using namespace std;

/** 
 * This class represents the toolbar with two buttons to start and quit the game
*/
class ToolBar : public QToolBar {
    Q_OBJECT
    
public:
  explicit ToolBar(MainWindow&);
  ~ToolBar();
  void show();
    
private:
  MainWindow* m; 
  bool hasStarted;
  

public slots:
  void startGame();
  void quitGame();
};

#endif 
