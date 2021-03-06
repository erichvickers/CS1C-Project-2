#ifndef POLYGON_H
#define POLYGON_H

#include "Shape.h"
#include "vector.h"

class Polygon : public Shape
{
private:
    vector<QPoint> points;
    int amount;

public:
    Polygon(QPoint *points_in, int amount_in, QPaintDevice *device);
    void draw() override;
    void move(int x1, int y1) override;
    double getPerimeter() override;
    double getArea() override;
};
#endif // POLYGON_H
