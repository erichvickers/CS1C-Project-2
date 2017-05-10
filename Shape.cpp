#include "Shape.h"

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
