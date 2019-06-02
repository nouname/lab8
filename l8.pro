TEMPLATE = subdirs

CONFIG -= app_bundle
QT += network
CONFIG += c++11

QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage -O0 -std=c++0x

SUBDIRS = app \
    l8-test

CONFIG += ordered
