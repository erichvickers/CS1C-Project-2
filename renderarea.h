#ifndef RENDERAREA_H
#define RENDERAREA_H

#include "mainwindow.h"
#include <QPainter>
#include <QMainWindow>

class RenderArea : public QMainWindow
{
    Q_OBJECT

public:
    enum Shape{ Line, Points, Polyline, Polygon, Rect, RoundedRect,
                Ellipse, Arc, Chord, Pie, Path, Text, Pixmap };

    RenderArea(QWidget *parent = 0);

    QSize minSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL;

public slots:
    void setShape(Shape shape);
    void setPen(const Qpen &pen);
    void setBrush(const Qbrush &brush);
    void setAntialiased(bool antialiased);
    void setTranformed(bool transformed);

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
    Shape shape;
    Qpen pen;
    Qbrush brush;
    bool antialiased;
    bool transformed;
    QPixmap pixmap;
};
#endif // RENDERAREA_H
