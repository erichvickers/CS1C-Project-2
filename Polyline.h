#ifndef POLYLINE_H
#define POLYLINE_H
#include "Shape.h"
#include "vector.h"

class Polyline : public Shape
{
private:
    vector<QPoint> points;
    int amount;

public:
     Polyline(QPoint *points_in, int amount_in);
     void draw() override;
     void move(QPoint newPoint);
     double getPerimeter() override;
     double getArea() override;
};
#endif // POLYLINE_H
