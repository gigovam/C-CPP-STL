cmake_minimum_required(VERSION 3.5)

project(exercise14-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercise14-1 main.cpp
    oblik.h oblik.cpp
    dvodimenzionalni.h dvodimenzionalni.cpp
    pravoagolnik.h pravoagolnik.cpp
    kvadrat.h kvadrat.cpp
    krug.h krug.cpp
    trodimenzionalni.h trodimenzionalni.cpp
    kocka.h kocka.cpp
    kvadar.h kvadar.cpp
    cilindar.h cilindar.cpp)

include(GNUInstallDirs)
install(TARGETS exercise14-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
