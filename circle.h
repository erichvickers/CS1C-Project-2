#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape
{

private:
    QPoint p1;
    int r;


public:
    Circle(int x1, int y1, int r);
    virtual draw();
    virtual void move();
    virtual void getPerimeter();
    virtual void getArea();
};
#endif // CIRCLE_H
