cmake_minimum_required(VERSION 3.5)

project(exercise13-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercise13-1 main.cpp
    zivotno.h zivotno.cpp
    datum.h datum.cpp
    vlekaci.h vlekaci.cpp
    cicaci.h cicaci.cpp
    ptici.h ptici.cpp)

include(GNUInstallDirs)
install(TARGETS exercise13-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
