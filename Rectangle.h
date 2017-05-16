#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape
{
private:
    int x;
    int y;
    int l;
    int w;

public:
    Rectangle(int x1, int y1, int l, int w, QPaintDevice *device);
    void draw() override;
    void move(int x1, int y1) override;
    double getPerimeter() override;
    double getArea() override;
};
#endif // RECTANGLE_H
