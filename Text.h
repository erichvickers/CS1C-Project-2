#ifndef TEXT_H
#define TEXT_H
#include "shape.h"

class text : public Shape
{

private:
    QPoint p1;
    int l;
    int w;


public:
    text(int x1, int y1, int l, int w);
    virtual void draw();
    virtual void move();
    virtual void getPerimeter();
    virtual void getArea();
};

#endif // TEXT_H
