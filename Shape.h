#ifndef SHAPE_H
#define SHAPE_H

#include <vector>
#include <QBrush>
#include <QPen>
#include <QWidget>
#include <QPainter>


//enum ShapeType {Line, Polyline,Polygon, Rectangle, Ellipse, Text};
// this causes errors because it's included somewhere within <QtGui>. creating it as an enum class within shape to solve this duplicity


class Shape : public QPainter
{
private:


    enum class ShapeType {None, Line, Polyline,Polygon, Rectangle, Ellipse, Text};

public:
    Shape();

    void setPenColor(QColor &color);
    void setPenWidth(int width);
    void setPenStyle(Qt::PenStyle);
    void setPenJointStyle(Qt::PenJoinStyle);
    void setBrushColor(QColor &color);
    void setBrushStyle(Qt::BrushStyle);

    // TODO: Override '>' operator (compare areas)

    virtual void draw() = 0;
    virtual void move(int,int) = 0;
    virtual double getPerimeter() = 0;
    virtual double getArea() = 0;

    void setShapeID(int s);
    int getShapeID();

protected:
    ShapeType s;
    QPen pen;
    QBrush brush;
    QColor color;

    static int ShapeCount;
    static int LineCount;
    static int PolylineCount;
    static int PolygonCount;
    static int RectangleCount;
    static int EllipseCount;
    static int TextCount;

    int shapeID;
};

#endif // SHAPE_H
