
#include "Line.h"
/*
class Line : public Shape
{
private:
     QPoint p1;
     QPoint p2;
 public:
      Line(int x1, int x2, int y1, int y2);
      virtual void draw();
      virtual void move();
      virtual void getPerimeter();
      virtual void getArea();
};
*/
Line::Line(int x1, int y1, int x2, int y2)
{

    setShapeID(1000 + LineCount);
    p1.setX(x1);
    p1.setY(y1);
    p2.setX(x2);
    p2.setY(y2);
    LineCount++;
}
void Line::draw()
{
      drawLine(p1, p2);

}
void Line::move()
{


}
double Line::getPerimeter()
{


}
double Line::getArea()
{


}
