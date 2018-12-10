#-------------------------------------------------
#
# Project created by QtCreator 2018-11-14T13:30:41
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project2_CS1D
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += resources_big

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    databasemanager.cpp \
    admintablemodel.cpp \
    adminwindow.cpp \
    teamsmodel.cpp \
    stadiumsmodel.cpp \
    souvenirsmodel.cpp \
    model.cpp \
    stadiumsteamscombinedmodel.cpp \
    distancesmodel.cpp \
    trip.cpp \
    graph.cpp \
    edge.cpp \
    vertex.cpp

HEADERS += \
        mainwindow.h \
    databasemanager.h \
    admintablemodel.h \
    adminwindow.h \
    teamsmodel.h \
    stadiumsmodel.h \
    souvenirsmodel.h \
    model.h \
    stadiumsteamscombinedmodel.h \
    distancesmodel.h \
    trip.h \
    graph.h \
    edge.h \
    vertex.h

FORMS += \
        mainwindow.ui \
    adminwindow.ui
	
RESOURCES += \
	resources.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
