#ifndef LINE_H
#define LINE_H
#include "shape.h"

class line : public Shape
{
private:
     QPoint p1;
     QPoint p2;
 public:
      line(int x1, int x2, int y1, int y2);
      virtual void draw();
      virtual void move();
      virtual void getPerimeter();
      virtual void getArea();
};
#endif // LINE_H

