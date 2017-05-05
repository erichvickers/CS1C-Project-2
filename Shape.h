#ifndef SHAPE_H
#define SHAPE_H

#include <vector>
#include <QBrush>
#include <QPen>
#include <QWidget>
#include <QPainter>
#include <QPaintDevice>


//enum ShapeType {Line, Polyline,Polygon, Rectangle, Ellipse, Text};
// this causes errors because it's included somewhere within <QtGui>. creating it as an enum class within shape to solve this duplicity


class Shape : public QPainter
{


    enum class ShapeType {None, Line, Polyline,Polygon, Rectangle, Ellipse, Text};
public:
    Shape();
    virtual void draw() = 0;
    virtual void move() = 0;
    virtual double getPerimeter() = 0;
    virtual double getArea() = 0;

    void setShapeID(int s);
    int getShapeID();

protected:

    void paintEvent(QPaintEvent *event);

    ShapeType s;
    QPen pen;
    QBrush brush;
    QColor color;



    int shapeID;

private:
    static int ShapeCount;
    static int LineCount;
    static int PolylineCount;
    static int PolygonCount;
    static int RectangleCount;
    static int EllipseCount;
    static int TextCount;
};

#endif // SHAPE_H
