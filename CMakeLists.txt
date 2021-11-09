cmake_minimum_required(VERSION 3.0)
project(ViewJS)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)
find_package(Qt5WebKitWidgets REQUIRED)
if (Qt5Core_FOUND AND Qt5Network_FOUND AND Qt5Widgets_FOUND)
    message("Qt5 COMPONENTS Qt5WebKitWidgets Core Network Widgets was found !!!")
else ()
    message("Qt5 COMPONENTS Qt5WebKitWidgets Core Network Widgets was not found")
endif()

qt5_add_resources(RESOURCES ${CMAKE_CURRENT_SOURCE_DIR}/resources/res.qrc)
qt5_wrap_ui(UI_FORM sources/contextHelp.ui)

set(SRC
    main.cpp
    sources/ContextHelp.cpp
    sources/WebView.cpp
)

add_executable(ContextHelp
    WIN32
    ${SRC}
    ${UI_FORM}
    ${RESOURCES}
)

target_link_libraries(ContextHelp
    PRIVATE
    Qt5::Core
    Qt5::Widgets
    Qt5::WebKit
    Qt5::WebKitWidgets
)

target_include_directories(ContextHelp
    PUBLIC
    sources
    ${CMAKE_CURRENT_BINARY_DIR}
    ${Qt5Core_INCLUDE_DIRS}
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE})
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} CACHE INTERNAL "" FORCE)
