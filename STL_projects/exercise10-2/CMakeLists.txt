cmake_minimum_required(VERSION 3.5)

project(exercise10-2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercise10-2 main.cpp)

include(GNUInstallDirs)
install(TARGETS exercise10-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
