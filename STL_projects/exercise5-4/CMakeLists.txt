cmake_minimum_required(VERSION 3.5)

project(exercise5-4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercise5-4 main.cpp)

include(GNUInstallDirs)
install(TARGETS exercise5-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
