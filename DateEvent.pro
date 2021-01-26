QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    core/DataBase/database.cpp \
    core/Date/date.cpp \
    core/ExpParser/Token.cpp \
    core/ExpParser/condition_parser.cpp \
    core/Nodes/DateComparisonNode/DateComparisonNode.cpp \
    core/Nodes/EmptyNode/EmptyNode.cpp \
    core/Nodes/EventComparisonNode/EventComparisonNode.cpp \
    core/Nodes/LogicalOperationNode/LogicalOperationNode.cpp \
    main.cpp \
    ui/mainwindow.cpp

HEADERS += \
    core/DataBase/database.h \
    core/Date/date.h \
    core/ExpParser/LogicalOperation.h \
    core/ExpParser/Token.h \
    core/ExpParser/comparison.h \
    core/ExpParser/condition_parser.h \
    core/Nodes/DateComparisonNode/DateComparisonNode.h \
    core/Nodes/EmptyNode/EmptyNode.h \
    core/Nodes/EventComparisonNode/EventComparisonNode.h \
    core/Nodes/LogicalOperationNode/LogicalOperationNode.h \
    core/Nodes/node.h \
    ui/mainwindow.h

FORMS += \
    ui/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
