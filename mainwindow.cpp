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

void Read()
{
QFile file("shapeText.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd())
    {
        while(int i == 6)
        {
        QString line = in.readLine();
        QStringList list;
        list = line.split(": ");
        int num1 = list[1].toInt();
        list = in.readLine().split(": ");
        QString type = list[1];
        list = in.readLine().split(": ");
        list = list[1].split(", ");
        QList<int> num2;
        for(int i =0; i < list.size(); i++)
        {
            num2.append(list[i].toInt());
        }
        list = in.readLine().split(": ");
        QString color = list[1];
        list = in.readLine().split(": ");
        int num3 = list[1].toInt();
        list = in.readLine().split(": ");
        QString style = list[1];
        list = in.readLine().split(": ");
        QString capStyle = list[1];
        list = in.readLine().split(": ");
        QString joinStyle = list[1];
        i++;
        }


        qDebug() << num1<< endl << num2 << endl << num3<< endl << type<<endl << color<<endl << style<<endl << capStyle<<endl << joinStyle<<endl;

    }
}
bool comparator(shape & a, shape & b)
{
    return a.getArea() > b.getArea();
}

void sortFunction(vector list)
{
     sort(list.begin(), list.end(), comparator());

     for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
     cout << ' ' << *it;
}
