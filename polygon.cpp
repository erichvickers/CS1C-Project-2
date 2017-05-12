#include "Polygon.h"

//class Polyline : public Shape
//{
//    vector<QPoint> points;

//public:
//     Polyline(QPoint *points, int amount);
//     void draw() override;
//     void move();
//     double getPerimeter() override;
//     double getArea() override;
//};

Polygon::Polygon(QPoint *points_in, int amount_in)
{
    shapeID = PolygonCount++;
    shapeID = shapeID + 3000;
    amount = amount_in;
    for (int i = 0; i < amount; i++)
    {
        points.push_back(points_in[i]);
    }
}

void Polygon::draw()
{
    QPoint *pptr = &points[0];
    drawPolygon(pptr,amount);
}

void Polygon::move(QPoint newPoint)
{
    int dx,dy;
    dx = newPoint.x() - points[0].x();
    dy = newPoint.y() - points[0].y();
    for (int i = 0; i < amount; i++)
    {
        points[i].setX(points[i].x() + dx);
        points[i].setY(points[i].y() + dy);
    }
}

double Polygon::getPerimeter()
{
    return 0;
}

double Polygon::getArea()
{
    return 0;
}
