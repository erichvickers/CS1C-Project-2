#ifndef SHAPE_H
#define SHAPE_H

#include <vector>
#include <QBrush>
#include <QPen>
#include <QPainter>

enum ShapeType {Line, Polyline,Polygon, Rectangle, Ellipse, Text};
enum Color {Red, Orange, Yellow, Green, Blue, Purple, White, Black};
enum PenStyle {Pen_Solid, Dash, Dot, Pen_None};
enum PenCapStyle {Flat, Square, Cap_Round};
enum PenJoinStyle {Miter, Bevel, Join_Round};
enum BrushStyle {LinearGradient, RadialGradient, ConicalGradient, Texture,
                 Brush_Solid, Horizontal, Vertical, Cross, BackwardDiagonal, ForwardDiagonal, Brush_None};


class Shape : public QPainter
{
public:
    Shape();
    virtual void draw() = 0;
    virtual void move() = 0;
    virtual void getPerimeter() = 0;
    virtual void getArea() = 0;

protected:
    ShapeType s;  // this will be set in each derived class

    double *dimensions = new double[10]; // array of dimensions. starts with the top dimension and goes clockwise
    // e.g. a rectangle with top/bottom sides at 5 units and the left and right sides of 2 units would be an array
    // of: {5,2,5,2}. Set up this way to be more robust for the polygon case (imagine the array for an octagon).
    // ellipses and lines would just be the circumference or line length, respectively.

//    QPen pen;
//    QColor color;
    // not sure if we're allowed to use these two because they do have everything. kinda defeats the purpose. unsure about some of the types
    // for variables like brush type but we'll figure it out.

    Color penColor;
    double penWidth;
    PenStyle penStyle;
    PenCapStyle penCapStyle;
    Color brushColor;
    BrushStyle brushStyle;

    int shapeID;

};

#endif // SHAPE_H
