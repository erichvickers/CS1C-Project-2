#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape.h"

class Ellipse : public Shape
{
private:
    int x;
    int y;
    int a;
    int b;

public:
    Ellipse(int x1, int y1, int a, int b, QPaintDevice *device);
    void draw() override;
    void move(int x1, int y1) override;
    double getPerimeter() override;
    double getArea() override;
};


#endif // ELLIPSE_H
