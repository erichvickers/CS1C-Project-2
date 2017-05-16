#include "Ellipse.h"

Ellipse::Ellipse(int x1, int y1, int a_in, int b_in, QPaintDevice *device)
    : Shape(device) , x(x1) , y(y1) , a(a_in) , b(b_in)
{
    if (a == b)
    {
        shapeID = CircleCount++;
        shapeID = shapeID + 7000;
    }
    else
    {
        shapeID = EllipseCount++;
        shapeID = shapeID + 6000;
    }
}

void Ellipse::draw()
{
    drawEllipse(x,y,a,b);
}

void Ellipse::move(int x1, int y1)
{
    x = x1;
    y = y1;
}

double Ellipse::getPerimeter()
{
    return 3.14 * (3 * (a + b) -
                   sqrt((3 * a + b) * (a + 3 * b)));
}

double Ellipse::getArea()
{
    return 3.14 * a * b;
}
