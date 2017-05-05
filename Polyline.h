#ifndef POLYLINE_H
#define POLYLINE_H
#include "Shape.h"

class Polyline : public Shape
{
    QPoint p1;
    QPoint p2;
    QPoint p3;
    QPoint p4;

public:
     Polyline(int x1, int y2, int x2, int y2, int x3, int y3, int x4, int y4);
     virtual void draw();
     virtual void move();
  virtual double getPerimeter();
     virtual double getArea();
};
#endif // POLYLINE_H
