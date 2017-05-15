#include "Text.h"

Text::Text(int x1, int y1, int l_in, int w_in)
{
    shapeID = TextCount++;
    shapeID = shapeID + 7000;
    p1.setX(x1);
    p1.setY(y1);
    l = l_in;
    w = w_in;
}

void Text::draw()
{
    QRect drawRect(p1.x(),p1.y(),l,w);
    drawText(drawRect,align,text.rawName());
}

void Text::move(int x1, int y1)
{
    p1.setX(x1);
    p1.setY(y1);
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
    text.setRawName(input);
}

void Text::setTextColor(QColor &color)
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

void Text::setTextFontFamily(QFont::StyleHint fam)
{
    text.setStyleHint(fam);
}

void Text::setTextFontStyle(QFont::Style style)
{
    text.setStyle(style);
}

void Text::setTextFontWeight(QFont::Weight weight)
{
    text.setWeight(weight);
}
