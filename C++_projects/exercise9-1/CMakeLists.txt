cmake_minimum_required(VERSION 3.5)

project(exercise9-1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercise9-1 main.cpp
    matrica.h matrica.cpp)

include(GNUInstallDirs)
install(TARGETS exercise9-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
