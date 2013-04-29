#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "graphicwindow.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDockWidget>
#include "power.h"
#include "gametracker.h"
#include "toolbar.h"
#include "nameline.h"



/**
  * This class is to set the mainwindow. It inherents from QMainWindow
  * which provides several functions to set the layout of the mainwindow.
  * The MainWindow has dock areas, a toolbar, and a centerwidget area. 
*/

class MainWindow : public QMainWindow {
    Q_OBJECT
    
public:
    explicit MainWindow();
    ~MainWindow();
    GraphicWindow *window;
    ToolBar* t;
    nameLine* n;
    Power *p;
    GameTracker *gt; 
    void keyPressEvent(QKeyEvent* e);
    QString name;
    
private:
    
public slots:

};

#endif 
