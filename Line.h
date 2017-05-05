#ifndef LINE_H
#define LINE_H
#include "Shape.h"

class Line : public Shape
{
private:
     QPoint p1;
     QPoint p2;
 public:
      line(int x1, int x2, int y1, int y2);
      virtual void draw();
      virtual void move();
      virtual double getPerimeter();
      virtual double getArea();
};
#endif // LINE_H

