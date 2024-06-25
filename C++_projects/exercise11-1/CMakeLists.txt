cmake_minimum_required(VERSION 3.5)

project(exercise11-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercise11-1 main.cpp
    datum.h datum.cpp
    artikl.h artikl.cpp
    pantoloni.h pantoloni.cpp
    kosuli.h kosuli.cpp)

include(GNUInstallDirs)
install(TARGETS exercise11-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
