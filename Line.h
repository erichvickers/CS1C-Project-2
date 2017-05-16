#ifndef LINE_H
#define LINE_H
#include "Shape.h"

class Line : public Shape
{
private:
    QPoint p1;
    QPoint p2;
public:
    Line(int x1, int y1, int x2, int y2, QPaintDevice *device);
    void draw() override;
    void move(int,int) override;
    double getPerimeter() override;
    double getArea() override;
};
#endif // LINE_H

