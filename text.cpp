#include "Text.h"

Text::Text(int x1, int y1, int l_in, int w_in, QPaintDevice *device)
    : Shape(device) , x(x1) , y(y1) , l(l_in) , w(w_in) , align(Qt::AlignCenter) ,
      output("hello world") , text("Times")
{
    shapeID = TextCount++;
    shapeID = shapeID + 8000;
}

void Text::draw()
{
    QRect drawRect(x,y,l,w);
    drawText(drawRect,align,output);
}

void Text::move(int x1, int y1)
{
    x = x1;
    y = y1;
}

double Text::getPerimeter()
{
    return 0;
}

double Text::getArea()
{
    return 0;
}

void Text::setTextString(QString input)
{
    output = input;
}

void Text::setTextColor(Qt::GlobalColor color)
{
    pen.setColor(color);
}

void Text::setTextAllignment(Qt::AlignmentFlag align_in)
{
    align = align_in;
}

void Text::setTextPointSize(int size)
{
    text.setPointSize(size);
}

void Text::setTextFontFamily(QString fam)
{
    text.setFamily(fam);
}

void Text::setTextFontStyle(QFont::Style style)
{
    text.setStyle(style);
}

void Text::setTextFontWeight(QFont::Weight weight)
{
    text.setWeight(weight);
}
