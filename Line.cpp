
#include "Line.h"
/*
class line : public Shape
{
private:
     QPoint p1;
     QPoint p2;
 public:
      line(int x1, int x2, int y1, int y2);
      virtual void draw();
      virtual void move();
      virtual void getPerimeter();
      virtual void getArea();
};
*/
Line::Line(int x1, int y1, int x2, int y2)
{
    shapeID = LineCount++;
    shapeID = shapeID + 1000;
    p1.setX(x1);
    p1.setY(y1);
    p2.setX(x2);
    p2.setY(y2);
}

void Line::draw()
{
    drawLine(p1, p2);

}

void Line::move(int x1, int y1)
{
    int dx,dy;
    dx = x1 - p1.x();
    dy = y1 - p1.y();
    p1.setX(x1);
    p1.setY(y1);
    p2.setX(dx + p2.x());
    p2.setY(dy + p2.y());
}

double Line::getPerimeter()
{
    return 0;
}

double Line::getArea()
{
    return 0;
}
