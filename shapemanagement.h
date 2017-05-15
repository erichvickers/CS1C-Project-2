#ifndef SHAPEMANAGEMENT_H
#define SHAPEMANAGEMENT_H

#include "vector.h"
#include "shape.h"

class ShapeMangement :
{
private:
    vector<Shape*> shapes;

public:
    void drawShape(Shape *s)
    {
        s->draw();
    }

    void moveShape(Shape *s, int x1, int y1)
    {
        s->move(x1,y1);
    }

    double getShapePerimeter(Shape *s)
    {
        return s->getPerimeter();
    }

    double getShapeArea(Shape *s)
    {
        return s->getArea();
    }

    void addShape(Shape *s)
    {
        shapes.push_back(s);
    }

    int totalShapes()
    {
        return shapes.size();
    }

    void drawAllShapes()
    {
        if (shapes.begin()!=nullptr)
        {
            for (shapes::iterator i = shapes.begin(); i != shapes.end(); i++)
            {
                drawShape(*i);
            }
        }
    }

    vector<*Shape> getShapesVector()
    {
        return shapes;
    }

};


#endif // SHAPEMANAGEMENT_H
