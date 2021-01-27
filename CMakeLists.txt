cmake_minimum_required(VERSION 3.1.0)

project(event-database VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

# INCLUDE(${QT_USE_FILE})
# ADD_DEFINITIONS(${QT_DEFINITIONS})


set(SOURCES
    main.cpp
    core/DataBase/database.cpp
    core/Date/date.cpp
    core/ExpParser/condition_parser.cpp
    core/ExpParser/token.cpp
    core/Nodes/DateComparisonNode/date_comparison_node.cpp
    core/Nodes/EmptyNode/empty_node.cpp
    core/Nodes/EventComparisonNode/event_comparison_node.cpp
    core/Nodes/LogicalOperationNode/logical_operation_node.cpp
    
    tests/LogDuration/log_duration.cpp
    tests/condition_parser_test.cpp
    tests/database_test.cpp
    tests/date_test.cpp
    tests/node_test.cpp
    tests/parsers_test.cpp
    tests/tests.cpp
    ui/mainwindow.cpp
)



add_executable(event-database 
    ${SOURCES}
    ${UI_HEADERS} 
)

target_link_libraries(event-database Qt5::Widgets)


