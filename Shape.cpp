#include "Shape.h"
int Shape::ShapeCount = 0;
int Shape::LineCount = 0;
int Shape::PolylineCount = 0;
int Shape::PolygonCount = 0;
int Shape::RectangleCount = 0;
int Shape::EllipseCount = 0;
int Shape::TextCount = 0;


Shape::Shape()
{

}

void Shape::setPenColor(QColor &color)
{
    pen.setColor(color);
}

void Shape::setPenWidth(int width)
{
    pen.setWidth(width);
}

void Shape::setPenStyle(Qt::PenStyle style)
{
    pen.setStyle(style);
}

void Shape::setPenJointStyle(Qt::PenJoinStyle style)
{
    pen.setJoinStyle(style);
}

void Shape::setBrushColor(QColor &color)
{
    brush.setColor(color);
}

void Shape::setBrushStyle(Qt::BrushStyle style)
{
    brush.setStyle(style);
}

void Shape::setShapeID(int s)
{
    shapeID = s;
}

int Shape::getShapeID()
{
    return shapeID;
}
