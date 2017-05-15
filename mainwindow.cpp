#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Read()
{
//QFile file("shapeText.txt");
//    if (!file.open(QFile::ReadOnly | QFile::Text))
//        return;

//    QTextStream in(&file);
//    while (!in.atEnd())
//    {
//        QString line = in.readLine();
//        QStringList list;
//        list = line.split(": ");
//        int num1 = list[1].toInt();
//        list = in.readLine().split(": ");
//        QString type = list[1];
//        list = in.readLine().split(": ");
//        list = list[1].split(", ");
//        QList<int> num2;
//        for(int i =0; i < list.size(); i++)
//        {
//            num2.append(list[i].toInt());
//        }
//        list = in.readLine().split(": ");
//        QString color = list[1];
//        list = in.readLine().split(": ");
//        int num3 = list[1].toInt();
//        list = in.readLine().split(": ");
//        QString style = list[1];
//        list = in.readLine().split(": ");
//        QString capStyle = list[1];
//        list = in.readLine().split(": ");
//        QString joinStyle = list[1];
//    }
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter p(this);

//    QPen pointPen(Qt::black);
//    pointPen.setWidth(5);

//    QPen linePen(Qt::green);
//    linePen.setWidth(2);

//    QPoint p1;
//    p1.setX(10);
//    p1.setY(15);

//    QPoint p2;
//    p2.setX(100);
//    p2.setY(100);

//    p.setPen(linePen);
//    p.drawLine(p1, p2);

//    p.setPen(pointPen);
//    p.drawRect(10, 120, 60, 20);
//    p.fillRect(10, 120, 60, 20, Qt::yellow);

//    p.drawPoint(p1);
//    p.drawPoint(p2);

//    linePen.setColor(Qt::blue);
//    p.setPen(linePen);
//    p1.setX(180);
//    p1.setY(70);
//    p.drawEllipse(p1, 20, 30);

//    linePen.setStyle(Qt::DotLine);
//    p.drawRect(230,230,100,30);
    p.drawText(250,250, "Text Box Example");
}
