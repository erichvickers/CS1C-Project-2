#ifndef SHAPE_H
#define SHAPE_H

#include <vector>
#include <QBrush>
#include <QPen>
#include <QWidget>
#include <QPainter>


//enum ShapeType {Line, Polyline,Polygon, Rectangle, Ellipse, Text};
// this causes errors because it's included somewhere within <QtGui>. creating it as an enum class within shape to solve this duplicity
static int ShapeCount = 0;
static int LineCount = 0;
static int PolylineCount = 0;
static int PolygonCount = 0;
static int RectangleCount = 0;
static int EllipseCount = 0;
static int TextCount = 0;

class Shape : public QPainter
{

    enum class ShapeType {None, Line, Polyline,Polygon, Rectangle, Ellipse, Text};
public:
    Shape();
    virtual void draw() = 0;
    virtual void move() = 0;
    virtual void getPerimeter() = 0;
    virtual void getArea() = 0;

    void setShapeID(int s);
    int getShapeID();

protected:


    ShapeType s;
    QPen pen;
    QBrush brush;
    QColor color;



    int shapeID;

};

#endif // SHAPE_H
