#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class rectangle : public Shape
{
private:
    QPoint p1;
    int l;
    int w;

public:
     polyline(int x1, int y1, int l, int w);
     virtual void draw();
     virtual void move();
     virtual void getPerimeter();
     virtual void getArea();
};
#endif // RECTANGLE_H
