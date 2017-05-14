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
     void draw() override;
     void move(int, int);
     void getPerimeter() override;
     void getArea() override;
};
#endif // RECTANGLE_H
