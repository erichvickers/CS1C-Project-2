#ifndef SHAPEMANAGEMENT_H
#define SHAPEMANAGEMENT_H

#include "vector.h"
#include "Line.h"
#include "Polyline.h"
#include "Polygon.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Text.h"

class ShapeManagement
{
private:

public:
    ShapeManagement() {}
    ~ShapeManagement() {}

    void drawShape(Shape *s) {s->draw();}
    void moveShape(Shape *s, int x1, int y1) {s->move(x1,y1);}
    double getShapePerimeter(Shape *s) {return s->getPerimeter();}
    double getShapeArea(Shape *s) {return s->getArea();}
};


#endif // SHAPEMANAGEMENT_H
