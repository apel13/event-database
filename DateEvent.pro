QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    core/DataBase/database.cpp \
    core/Date/date.cpp \
    core/ExpParser/condition_parser.cpp \
    core/ExpParser/token.cpp \
    core/Nodes/DateComparisonNode/date_comparison_node.cpp \
    core/Nodes/EmptyNode/empty_node.cpp \
    core/Nodes/EventComparisonNode/event_comparison_node.cpp \
    core/Nodes/LogicalOperationNode/logical_operation_node.cpp \
    main.cpp \
    tests/LogDuration/log_duration.cpp \
    tests/condition_parser_test.cpp \
    tests/database_test.cpp \
    tests/date_test.cpp \
    tests/node_test.cpp \
    tests/parsers_test.cpp \
    tests/tests.cpp \
    ui/mainwindow.cpp

HEADERS += \
    core/DataBase/database.h \
    core/Date/date.h \
    core/ExpParser/comparison.h \
    core/ExpParser/condition_parser.h \
    core/ExpParser/logical_operation.h \
    core/ExpParser/token.h \
    core/Nodes/DateComparisonNode/date_comparison_node.h \
    core/Nodes/EmptyNode/empty_node.h \
    core/Nodes/EventComparisonNode/event_comparison_node.h \
    core/Nodes/LogicalOperationNode/logical_operation_node.h \
    core/Nodes/node.h \
    tests/LogDuration/log_duration.h \
    tests/TestRunner/test_runner.h \
    tests/tests.h \
    ui/mainwindow.h

FORMS += \
    ui/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md
