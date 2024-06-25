cmake_minimum_required(VERSION 3.5)

project(exercise8-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercise8-1 main.cpp
    complex1.h complex1.cpp)

include(GNUInstallDirs)
install(TARGETS exercise8-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
