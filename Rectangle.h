#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape
{
private:
    QPoint p1;
    int l;
    int w;

public:
     Rectangle(int x1, int y1, int l, int w);
     virtual void draw();
     void move();
     virtual void getPerimeter();
     virtual void getArea();
};
#endif // RECTANGLE_H
