#ifndef TEXT_H
#define TEXT_H
#include "Shape.h"

class Text : public Shape
{

private:
    QPoint p1;
    int l;
    int w;


public:
    Text(int x1, int y1, int l, int w);
    virtual void draw();
    virtual void move();
    virtual void getPerimeter();
    virtual void getArea();
};

#endif // TEXT_H
