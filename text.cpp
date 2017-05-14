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
