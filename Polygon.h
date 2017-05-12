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
      Polygon(QPoint *points_in, int amount_in);
      void draw() override;
      void move(QPoint);
      virtual double getPerimeter();
      virtual double getArea();
};
#endif // POLYGON_H
