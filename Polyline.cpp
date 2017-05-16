#include "Polyline.h"

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

Polyline::Polyline(QPoint* points_in, int amount_in, QPaintDevice *device)
    : Shape(device) , points(amount_in * 2) , amount(amount_in)
{
    shapeID = PolylineCount++;
    shapeID = shapeID + 2000;
    for (int i = 0; i < amount; i++)
    {
        points.push_back(points_in[i]);
    }
}

void Polyline::draw()
{
    QPoint *pptr = &points[0];
    drawPolyline(pptr,amount);
}

void Polyline::move(int x1, int y1)
{
    int dx,dy;
    dx = x1 - points[0].x();
    dy = y1 - points[0].y();
    for (int i = 0; i < amount; i++)
    {
        points[i].setX(points[i].x() + dx);
        points[i].setY(points[i].y() + dy);
    }
}

double Polyline::getPerimeter()
{
    return 0;
}

double Polyline::getArea()
{
    return 0;
}
