TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXX = g++-5
QMAKE_LINK = g++-5
QMAKE_CC = gcc-5

QMAKE_CXXFLAGS += -std=c++11 -Wall -Wextra -Weffc++

LIBS += -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

SOURCES += main.cpp \
    window.cpp \
    bubble.cpp

HEADERS += \
    bubble.h

