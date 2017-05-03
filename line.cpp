
#include "line.h"
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
line::line(int x1, int y1, int x2, int y2)
{
    p1.setX(x1);
    p1.setY(y1);
    p2.setX(x2);
    p2.setY(y2);
}
void line::draw()
{
      drawLine(p1, p2);

}
void line::move()
{


}
void line::getPerimeter()
{


}
void line::getArea()
{


}
