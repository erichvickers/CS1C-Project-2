#ifndef POLYLINE_H
#define POLYLINE_H
#include "Shape.h"
#include "vector.h"

class Polyline : public Shape
{
    vector<QPoint> points;

public:
     Polyline(QPoint *points, int amount);
     void draw() override;
     void move();
     double getPerimeter() override;
     double getArea() override;
};
#endif // POLYLINE_H
