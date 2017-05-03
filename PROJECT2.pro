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
    shape.cpp \
    line.cpp

HEADERS  += mainwindow.h \
    vector.h \
    shape.h \
    rectangle.h \
    line.h \
    polyline.h \
    polygon.h \
    square.h \
    ellipse.h \
    circle.h \
    text.h

FORMS    += mainwindow.ui
