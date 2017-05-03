#ifndef POLYLINE_H
#define POLYLINE_H
#include "shape.h"

class polyline : public Shape
{
    QPoint p1;
    QPoint p2;
    QPoint p3;
    QPoint p4;

public:
     polyline(int x1, int y2, int x2, int y2, int x3, int y3, int x4, int y4);
     virtual void draw();
     virtual void move();
  virtual void getPerimeter();
     virtual void getArea();
};
#endif // POLYLINE_H
