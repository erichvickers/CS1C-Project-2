#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class square : public Shape
{
private:
    QPoint p1;
    int l;

public:
     square(int x1, int y1, int l);
     virtual draw();
     virtual void move();
     virtual void getPerimeter();
     virtual void getArea();
};
};
#endif // SQUARE_H
