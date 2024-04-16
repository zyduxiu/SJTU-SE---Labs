QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    command.cpp \
    exp_tree.cpp \
    expression.cpp \
    help.cpp \
    main.cpp \
    mainwindow.cpp \
    program.cpp \
    program_line.cpp \
    statement.cpp \
    success.cpp \
    wrongfile.cpp

HEADERS += \
    command.h \
    exp_tree.h \
    expression.h \
    help.h \
    mainwindow.h \
    program.h \
    program_line.h \
    statement.h \
    success.h \
    wrongfile.h

FORMS += \
    help.ui \
    mainwindow.ui \
    success.ui \
    wrongfile.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
