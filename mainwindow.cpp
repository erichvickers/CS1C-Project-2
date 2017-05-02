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

void readFromFile()
{
    string STRING;
       ifstream infile;
       infile.open ("names.txt");
           while(!infile.eof) // To get you all the lines.
           {
               getline(infile,STRING); // Saves the line in STRING.
               cout<<STRING; // Prints our STRING.
           }
       infile.close();
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
