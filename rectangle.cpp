#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int l, int w)
{

}

void Rectangle::draw()
{
    drawRect(p1.x(),p1.y(),w,l);
}

void Rectangle::move()
{

}

double Rectangle::getPerimeter()
{
    return (2*(this->l) + 2*(this->w));
}

double Rectangle::getArea()
{
    return l * w;
}
