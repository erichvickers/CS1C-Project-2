#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fstream>
#include <algorithm>
#include <QFile>
#include <QTextStream>
#include "shapemanagement.h"
#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void Read(QPaintDevice*);
    void shapeSetup();

    Qt::GlobalColor penColor(QString color);
    Qt::PenStyle penStyle(QString style);
    Qt::PenCapStyle penCapStyle(QString style);
    Qt::PenJoinStyle penJoinStyle(QString style);
    Qt::BrushStyle brushStyle(QString style);
    Qt::AlignmentFlag alignmentFlag(QString style);
    QFont::StyleHint textFont(QString style);
    QFont::Style textFontStyle(QString style);
    QFont::Weight textWeight(QString style);

protected:
    void paintEvent(QPaintEvent *event);



private:
    Ui::MainWindow *ui;
    ShapeManagement manager;
    vector<Shape*> shapes;
};

#endif // MAINWINDOW_H
