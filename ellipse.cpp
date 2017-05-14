#include "Ellipse.h"

Ellipse::Ellipse(int x1, int y1, int a_in, int b_in)
{
    shapeID = EllipseCount++;
    shapeID = shapeID + 6000;
    p1.setX(x1);
    p1.setY(y1);
    a = a_in;
    b = b_in;
}

void Ellipse::draw() override
{
    drawEllipse(p1,a,b);
}

void Ellipse::move(int x1, int y1)
{
    p1.setX(x1);
    p1.setY(y1);
}

double Ellipse::getPerimeter() override
{
    return 3.14 * (3 * (a + b) -
                   sqrt((3 * a + b) * (a + 3 * b)));
}

double Ellipse::getArea() override
{
    return 3.14 * a * b;
}
