#-------------------------------------------------
#
# Project created by QtCreator 2012-07-12T19:34:49
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainWindow
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    helpmedialog.cpp \
    chatviewform.cpp \
    msgsender.cpp \
    msgholder.cpp \
    chatcontrl.cpp \
    configehostdialog.cpp

HEADERS  += mainwindow.h \
    helpmedialog.h \
    chatviewform.h \
    msgsender.h \
    msgholder.h \
    chatcontrl.h \
    configehostdialog.h

FORMS    += mainwindow.ui \
    helpmedialog.ui \
    chatviewform.ui \
    configehostdialog.ui
