#-------------------------------------------------
#
# Project created by QtCreator 2017-04-18T16:15:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Line.cpp \
    Polyline.cpp \
    Shape.cpp

HEADERS  += mainwindow.h \
    vector.h \
    square.h \
    circle.h \
    Ellipse.h \
    Shape.h \
    Line.h \
    Polygon.h \
    Polyline.h \
    Rectangle.h \
    Text.h

FORMS    += mainwindow.ui
