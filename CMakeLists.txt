cmake_minimum_required(VERSION 3.1.0)
project(notepad)

set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Core Widgets LinguistTools PrintSupport)

include_directories(src)

set(translations_SRCS
    translations/notepad_pl.ts
    translations/notepad_eo.ts
)

set_property(GLOBAL APPEND PROPERTY COMPILE_DEFINITIONS $<$<CONFIG:Debug>:DEBUG>)

file(MAKE_DIRECTORY bin)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
file(MAKE_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/translations)
set_source_files_properties(${translations_SRCS} PROPERTIES OUTPUT_LOCATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/translations)

qt5_create_translation(QM_FILES ${translations_SRCS})

set(notepad_SRCS
    src/editmenu.cpp
    src/editmenu.hpp
    src/filemenu.cpp
    src/filemenu.hpp
    src/helpmenu.cpp
    src/helpmenu.hpp
    src/main.cpp
    src/mainwindow.cpp
    src/mainwindow.hpp
    src/notepadapp.cpp
    src/notepadapp.hpp
    src/setsmenu.cpp
    src/setsmenu.hpp
    src/tabwidget.cpp
    src/tabwidget.hpp
    src/notepadtab.cpp
    src/notepadtab.hpp
    src/findbar.cpp
    src/findbar.hpp
    src/tabbar.cpp
    src/tabbar.hpp
    src/licenceviewer.cpp
    src/licenceviewer.hpp
    #${CMAKE_BINARY_DIR}/translations.qrc
    ${QM_FILES}
)

add_executable(notepad ${notepad_SRCS})
target_link_libraries(notepad Qt5::Widgets Qt5::Core Qt5::PrintSupport)
