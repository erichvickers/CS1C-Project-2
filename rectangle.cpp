#include "Rectangle.h"

Rectangle::Rectangle(int x1,int y1,int l_in,int w_in)
{
    shapeID = RectangleCount++;
    shapeID = shapeID + 4000;
    p1.setX(x1);
    p1.setY(y1);
    l = l_in;
    w = w_in;
}

void Rectangle::draw()
{
    drawRect(p1.x(),p1.y(),l,w);
}

void Rectangle::move(int x, int y)
{
    p1.setX(x);
    p1.setY(y);
}

double Rectangle::getPerimeter()
{
    return l*2 + w*2;
}

double Rectangle::getArea()
{
    return l * w;
}
