#ifndef TEXT_H
#define TEXT_H
#include "Shape.h"

class Text : public Shape
{

private:
    int x;
    int y;
    int l;
    int w;

    Qt::AlignmentFlag align;
    QString output;
    QFont text;

public:
    Text(int x1, int y1, int l, int w, QPaintDevice *device);
    void draw() override;
    void move(int x1, int y1) override;
    double getPerimeter() override;
    double getArea() override;

    void setTextString(QString);
    void setTextColor(Qt::GlobalColor);
    void setTextAllignment(Qt::AlignmentFlag);
    void setTextPointSize(int);
    void setTextFontFamily(QString);
    void setTextFontStyle(QFont::Style);
    void setTextFontWeight(QFont::Weight);





};

#endif // TEXT_H
