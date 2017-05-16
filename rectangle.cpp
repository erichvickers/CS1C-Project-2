#include "Rectangle.h"

Rectangle::Rectangle(int x1,int y1,int l_in,int w_in, QPaintDevice *device)
    : Shape(device) , x(x1) , y(y1) , l(l_in) , w(w_in)
{
    if (l == w)
    {
        shapeID = SquareCount++;
        shapeID = shapeID + 5000;
    }
    else
    {
        shapeID = RectangleCount++;
        shapeID = shapeID + 4000;
    }

}

void Rectangle::draw()
{
    drawRect(x,y,l,w);
    fillRect(x,y,l,w,brush);
}

void Rectangle::move(int x1, int y1)
{
    x = x1;
    y = y1;
}

double Rectangle::getPerimeter()
{
    return l*2 + w*2;
}

double Rectangle::getArea()
{
    return l * w;
}
