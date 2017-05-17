#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) , manager() , shapes(10)
{
    ui->setupUi(this);
    this->setFixedSize(1280,720);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::shapeSetup()
{
    for (int i = 0; i < shapes.size(); i++)
    {
        shapes[i]->setNewPen(shapes[i]->getPen());
        shapes[i]->setNewBrush(shapes[i]->getBrush());
        shapes[i]->setNewFont(shapes[i]->getFont());
        manager.drawShape(shapes[i]);
    }
}

void MainWindow::Read(QPaintDevice *device)
{
    QFile file("://shapes.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        return;
    }


    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString first = in.readLine();
        first = in.readLine();
        QStringList list = in.readLine().split(": ");
        QString shapeType = list[1];
        if (shapeType == "Line")
        {
            list = in.readLine().split(": ");
            list = list[1].split(", ");
            QPoint id(list[0].toInt(),list[1].toInt());
            Line *newLine = new Line(list[0].toInt(),list[1].toInt(),list[2].toInt(),list[3].toInt(),device);
            list = in.readLine().split(": ");
            QPen newPen;
            newPen.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newPen.setWidth(list[1].toInt());
            list = in.readLine().split(": ");
            newPen.setStyle(penStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setCapStyle(penCapStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setJoinStyle(penJoinStyle(list[1]));
            newLine->setNewPen(newPen);
            shapes.push_back(newLine);
            manager.drawShape(newLine);
            manager.moveShape(newLine,0,100);
            manager.drawShape(newLine);
            QFont newFont;
            QPen newPen1;
            newLine->setPen(newPen1);
            newLine->setFont(newFont);
            QString id_string = QString::number(newLine->getShapeID());
            newLine->drawText(id,id_string);
        }
        if (shapeType == "Polyline")
        {
            list = in.readLine().split(": ");
            list = list[1].split(", ");
            QPoint id(list[0].toInt(),list[1].toInt());
            int listSize = list.size();
            listSize = listSize/2;
            QPoint *polyPoints = new QPoint[listSize];
            for (int i = 0; i < listSize; i++)
            {
                polyPoints[i].setX(list[i*2].toInt());
                polyPoints[i].setY(list[(i*2)+1].toInt());
            }
            //            return;
            Polyline *newPolyline = new Polyline(polyPoints,listSize,device);
            list = in.readLine().split(": ");
            QPen newPen;
            newPen.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newPen.setWidth(list[1].toInt());
            list = in.readLine().split(": ");
            newPen.setStyle(penStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setCapStyle(penCapStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setJoinStyle(penJoinStyle(list[1]));
            newPolyline->setNewPen(newPen);
            shapes.push_back(newPolyline);
            manager.drawShape(newPolyline);
            manager.moveShape(newPolyline,100,100);
            manager.drawShape(newPolyline);
            QFont newFont;
            QPen newPen1;
            newPolyline->setPen(newPen1);
            newPolyline->setFont(newFont);
            QString id_string = QString::number(newPolyline->getShapeID());
            newPolyline->drawText(id,id_string);
        }
        if (shapeType == "Polygon")
        {
            list = in.readLine().split(": ");
            list = list[1].split(", ");
            QPoint id(list[0].toInt(),list[1].toInt());
            int listSize = list.size();
            listSize = listSize/2;
            QPoint *polyPoints = new QPoint[listSize];
            for (int i = 0; i < listSize; i++)
            {
                polyPoints[i].setX(list[i*2].toInt());
                polyPoints[i].setY(list[(i*2)+1].toInt());
            }
            Polygon *newPolygon = new Polygon(polyPoints,listSize,device);
            list = in.readLine().split(": ");
            QPen newPen;
            newPen.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newPen.setWidth(list[1].toInt());
            list = in.readLine().split(": ");
            newPen.setStyle(penStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setCapStyle(penCapStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setJoinStyle(penJoinStyle(list[1]));
            list = in.readLine().split(": ");
            QBrush newBrush;
            newBrush.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newBrush.setStyle(brushStyle(list[1]));
            newPolygon->setNewPen(newPen);
            newPolygon->setNewBrush(newBrush);
            shapes.push_back(newPolygon);
            manager.drawShape(newPolygon);
            manager.moveShape(newPolygon,200,100);
            manager.drawShape(newPolygon);
            QFont newFont;
            QPen newPen1;
            newPolygon->setPen(newPen1);
            newPolygon->setFont(newFont);
            QString id_string = QString::number(newPolygon->getShapeID());
            newPolygon->drawText(id,id_string);
        }
        if (shapeType == "Rectangle")
        {
            list = in.readLine().split(": ");
            list = list[1].split(", ");
            QPoint id(list[0].toInt(),list[1].toInt());
            Rectangle *newRectangle = new Rectangle(list[0].toInt(),list[1].toInt(),list[2].toInt(),list[3].toInt(),device);
            list = in.readLine().split(": ");
            QPen newPen;
            newPen.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newPen.setWidth(list[1].toInt());
            list = in.readLine().split(": ");
            newPen.setStyle(penStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setCapStyle(penCapStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setJoinStyle(penJoinStyle(list[1]));
            list = in.readLine().split(": ");
            QBrush newBrush;
            newBrush.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newBrush.setStyle(brushStyle(list[1]));
            newRectangle->setNewPen(newPen);
            newRectangle->setNewBrush(newBrush);
            shapes.push_back(newRectangle);
            manager.drawShape(newRectangle);
            manager.moveShape(newRectangle,400,600);
            manager.drawShape(newRectangle);
            QFont newFont;
            QPen newPen1;
            newRectangle->setPen(newPen1);
            newRectangle->setFont(newFont);
            QString id_string = QString::number(newRectangle->getShapeID());
            newRectangle->drawText(id,id_string);
        }
        if (shapeType == "Square")
        {
            list = in.readLine().split(": ");
            list = list[1].split(", ");
            QPoint id(list[0].toInt(),list[1].toInt());
            Rectangle *newSquare = new Rectangle(list[0].toInt(),list[1].toInt(),list[2].toInt(),list[2].toInt(),device);
            list = in.readLine().split(": ");
            QPen newPen;
            newPen.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newPen.setWidth(list[1].toInt());
            list = in.readLine().split(": ");
            newPen.setStyle(penStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setCapStyle(penCapStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setJoinStyle(penJoinStyle(list[1]));
            list = in.readLine().split(": ");
            QBrush newBrush;
            newBrush.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newBrush.setStyle(brushStyle(list[1]));
            newSquare->setNewPen(newPen);
            newSquare->setNewBrush(newBrush);
            shapes.push_back(newSquare);
            manager.drawShape(newSquare);
            manager.moveShape(newSquare,400,600);
            manager.drawShape(newSquare);
            QFont newFont;
            QPen newPen1;
            newSquare->setPen(newPen1);
            newSquare->setFont(newFont);
            QString id_string = QString::number(newSquare->getShapeID());
            newSquare->drawText(id,id_string);
        }
        if (shapeType == "Ellipse")
        {
            list = in.readLine().split(": ");
            list = list[1].split(", ");
            QPoint id(list[0].toInt(),list[1].toInt());
            Ellipse *newEllipse = new Ellipse(list[0].toInt(),list[1].toInt(),list[2].toInt(),list[3].toInt(),device);
            list = in.readLine().split(": ");
            QPen newPen;
            newPen.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newPen.setWidth(list[1].toInt());
            list = in.readLine().split(": ");
            newPen.setStyle(penStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setCapStyle(penCapStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setJoinStyle(penJoinStyle(list[1]));
            list = in.readLine().split(": ");
            QBrush newBrush;
            newBrush.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newBrush.setStyle(brushStyle(list[1]));
            newEllipse->setNewPen(newPen);
            newEllipse->setNewBrush(newBrush);
            shapes.push_back(newEllipse);
            manager.drawShape(newEllipse);
            manager.moveShape(newEllipse,400,600);
            manager.drawShape(newEllipse);
            QFont newFont;
            QPen newPen1;
            newEllipse->setPen(newPen1);
            newEllipse->setFont(newFont);
            QString id_string = QString::number(newEllipse->getShapeID());
            newEllipse->drawText(id,id_string);
        }
        if (shapeType == "Circle")
        {
            list = in.readLine().split(": ");
            list = list[1].split(", ");
            QPoint id(list[0].toInt(),list[1].toInt());
            Ellipse *newCircle = new Ellipse(list[0].toInt(),list[1].toInt(),list[2].toInt(),list[2].toInt(),device);
            list = in.readLine().split(": ");
            QPen newPen;
            newPen.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newPen.setWidth(list[1].toInt());
            list = in.readLine().split(": ");
            newPen.setStyle(penStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setCapStyle(penCapStyle(list[1]));
            list = in.readLine().split(": ");
            newPen.setJoinStyle(penJoinStyle(list[1]));
            list = in.readLine().split(": ");
            QBrush newBrush;
            newBrush.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newBrush.setStyle(brushStyle(list[1]));
            newCircle->setNewPen(newPen);
            newCircle->setNewBrush(newBrush);
            shapes.push_back(newCircle);
            manager.drawShape(newCircle);
            QFont newFont;
            QPen newPen1;
            newCircle->setPen(newPen1);
            newCircle->setFont(newFont);
            QString id_string = QString::number(newCircle->getShapeID());
            newCircle->drawText(id,id_string);
        }
        if (shapeType == "Text")
        {
            list = in.readLine().split(": ");
            list = list[1].split(", ");
            QPoint id(list[0].toInt(),list[1].toInt());
            Text *newText = new Text(list[0].toInt(),list[1].toInt(),list[2].toInt(),list[3].toInt(),device);
            QFont newFont;
            QPen newPen;
            list = in.readLine().split(": ");
            newText->setTextString(list[1]);
            list = in.readLine().split(": ");
            newPen.setColor(penColor(list[1]));
            list = in.readLine().split(": ");
            newText->setTextAllignment(alignmentFlag(list[1]));
            list = in.readLine().split(": ");
            newFont.setPointSize(list[1].toInt());
            list = in.readLine().split(": ");
            newFont.setFamily(list[1]);
            list = in.readLine().split(": ");
            newFont.setStyle(textFontStyle(list[1]));
            list = in.readLine().split(": ");
            newFont.setWeight(textWeight(list[1]));
            newText->setNewPen(newPen);
            newText->setNewFont(newFont);
            shapes.push_back(newText);
            manager.drawShape(newText);
            QFont newFont1;
            QPen newPen1;
            newText->setPen(newPen1);
            newText->setFont(newFont1);
            QString id_string = QString::number(newText->getShapeID());
            newText->drawText(id,id_string);
        }
    }
    file.close();
}


void MainWindow::paintEvent(QPaintEvent *event)
{
    Ellipse *newEllipse = new Ellipse(500,500,100,101,this);
    QPen newPen;
    newPen.setColor(Qt::cyan);
    newPen.setWidth(5);
    newPen.setStyle(Qt::DashLine);
    newPen.setCapStyle(Qt::SquareCap);
    newPen.setJoinStyle(Qt::MiterJoin);
    QBrush newBrush;
    newBrush.setColor(Qt::red);
    newBrush.setStyle(Qt::SolidPattern);
    newEllipse->setNewPen(newPen);
    newEllipse->setNewBrush(newBrush);
    manager.drawShape(newEllipse);

    Read(this);
}


Qt::GlobalColor MainWindow::penColor(QString color)
{
    if (color == "white")
    {
        return Qt::white;
    }
    if (color == "black")
    {
        return Qt::black;
    }
    if (color == "red")
    {
        return Qt::red;
    }
    if (color == "green")
    {
        return Qt::green;
    }
    if (color == "blue")
    {
        return Qt::blue;
    }
    if (color == "cyan")
    {
        return Qt::cyan;
    }
    if (color == "magenta")
    {
        return Qt::magenta;
    }
    if (color == "yellow")
    {
        return Qt::GlobalColor::yellow;
    }
    if (color == "gray")
    {
        return Qt::GlobalColor::gray;
    }

    return Qt::GlobalColor::black;
}

Qt::PenStyle MainWindow::penStyle(QString style)
{
    // NoPen, SolidLine, DashLine, DotLine, DashDotLine, DashDotDotLine
    if (style == "NoPen")
    {
        return Qt::PenStyle::NoPen;
    }
    if (style == "SolidLine")
    {
        return Qt::PenStyle::SolidLine;
    }
    if (style == "DashLine")
    {
        return Qt::PenStyle::DashLine;
    }
    if (style == "DotLine")
    {
        return Qt::PenStyle::DotLine;
    }
    if (style == "DashDotLine")
    {
        return Qt::PenStyle::DashDotLine;
    }
    if (style == "DashDotDotLine")
    {
        return Qt::PenStyle::DashDotDotLine;
    }

    return Qt::PenStyle::SolidLine;
}

Qt::PenCapStyle MainWindow::penCapStyle(QString style)
{
    // FlatCap, SquareCap, RoundCap
    if (style == "FlatCap")
    {
        return Qt::PenCapStyle::FlatCap;
    }
    if (style == "SquareCap")
    {
        return Qt::PenCapStyle::SquareCap;
    }
    if (style == "RoundCap")
    {
        return Qt::PenCapStyle::RoundCap;
    }

    return Qt::PenCapStyle::FlatCap;
}

Qt::PenJoinStyle MainWindow::penJoinStyle(QString style)
{
    // MiterJoin, BevelJoin, RoundJoin
    if (style == "MiterJoin")
    {
        return Qt::PenJoinStyle::MiterJoin;
    }
    if (style == "BevelJoin")
    {
        return Qt::PenJoinStyle::BevelJoin;
    }
    if (style == "RoundJoin")
    {
        return Qt::PenJoinStyle::RoundJoin;
    }

    return Qt::PenJoinStyle::MiterJoin;
}

Qt::BrushStyle MainWindow::brushStyle(QString style)
{
    // SolidPattern, HorPattern, VerPattern, NoBrush
    if (style == "SolidPattern")
    {
        return Qt::BrushStyle::SolidPattern;
    }
    if (style == "HorPattern")
    {
        return Qt::BrushStyle::HorPattern;
    }
    if (style == "VerPattern")
    {
        return Qt::BrushStyle::VerPattern;
    }
    if (style == "NoBrush")
    {
        return Qt::BrushStyle::NoBrush;
    }

    return Qt::BrushStyle::SolidPattern;
}

Qt::AlignmentFlag MainWindow::alignmentFlag(QString style)
{
    // AlignLeft, AlignRight, AlignTop, AlignBottom, AlignCenter
    if (style == "AlignLeft")
    {
        return Qt::AlignmentFlag::AlignLeft;
    }
    if (style == "AlignRight")
    {
        return Qt::AlignmentFlag::AlignRight;
    }
    if (style == "AlignTop")
    {
        return Qt::AlignmentFlag::AlignTop;
    }
    if (style == "AlignBottom")
    {
        return Qt::AlignmentFlag::AlignBottom;
    }
    if (style == "AlignCenter")
    {
        return Qt::AlignmentFlag::AlignCenter;
    }

    return Qt::AlignmentFlag::AlignCenter;
}

QFont::StyleHint MainWindow::textFont(QString style)
{
    // Comic Sans MS, Courier, Helvetica, Times
    if (style == "Comic Sans MS")
    {
        return QFont::Fantasy;
    }
    if (style == "Courier")
    {
        return QFont::Courier;
    }
    if (style == "Helvetica")
    {
        return QFont::Helvetica;
    }
    if (style == "Times")
    {
        return QFont::Times;
    }

    return QFont::Fantasy;
}

QFont::Style MainWindow::textFontStyle(QString style)
{
    // StyleNormal, StyleItalic, StyleOblique
    if (style == "StyleNormal")
    {
        return QFont::StyleNormal;
    }
    if (style == "StyleItalic")
    {
        return QFont::StyleItalic;
    }
    if (style == "StyleOblique")
    {
        return QFont::StyleOblique;
    }

    return QFont::StyleNormal;
}

QFont::Weight MainWindow::textWeight(QString style)
{
    // Thin, Light, Normal, Bold
    if (style == "Thin")
    {
        return QFont::Thin;
    }
    if (style == "Light")
    {
        return QFont::Light;
    }
    if (style == "Normal")
    {
        return QFont::Normal;
    }
    if (style == "Bold")
    {
        return QFont::Bold;
    }

    return QFont::Normal;
}

