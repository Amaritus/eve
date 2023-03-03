cmake_minimum_required(VERSION 3.5)
project(adamwizard VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Core Gui)

set(PROJECT_SOURCES
   main.cpp
   adamwizard.cpp
   adamwizard.h
   adamwizard.qrc
)

add_executable(adamwizard WIN32 ${PROJECT_SOURCES})

target_link_libraries(adamwizard PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(adamwizard PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(adamwizard PRIVATE Qt${QT_VERSION_MAJOR}::Gui)

set_target_properties(adamwizard PROPERTIES WIN32_EXECUTABLE TRUE)

set(CPACK_GENERATOR "ZIP")
set(CPACK_SOURCE_GENERATOR "ZIP")
include(CPACK)
install(TARGETS adamwizard RUNTIME DESTINATION bin)