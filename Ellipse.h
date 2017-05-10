#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape.h"

class Ellipse : public Shape
{
private:
     QPoint p1;
    int a;
    int b;

 public:
      Ellipse(int x1, int y1, int a, int b);
      virtual draw();
      void move();
      virtual void getPerimeter();
      virtual void getArea();
};


#endif // ELLIPSE_H
