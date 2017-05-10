#ifndef POLYGON_H
#define POLYGON_H

#include "Shape.h"

class Polygon : public Shape
{
private:
     QPoint p1;
     QPoint p2;
     QPoint p3;
     QPoint p4;

 public:
      Polygon(int x1, int y2, int x2, int y2, int x3, int y3, int x4, int y4);
      virtual void draw();
      void move();
      virtual void getPerimeter();
      virtual void getArea();
};
#endif // POLYGON_H
