cmake_minimum_required(VERSION 3.5)

project(exercise12-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercise12-1 main.cpp
    oblik.h oblik.cpp
    dvodimenzionalni.h dvodimenzionalni.cpp
    trodimenzionalni.h trodimenzionalni.cpp
    kvadrat.h kvadrat.cpp
    pravoagolnik.h pravoagolnik.cpp
    kocka.h kocka.cpp
    kvadar.h kvadar.cpp)

include(GNUInstallDirs)
install(TARGETS exercise12-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
