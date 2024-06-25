cmake_minimum_required(VERSION 3.5)

project(exercise4-3 LANGUAGES C)

add_executable(exercise4-3 main.c)

include(GNUInstallDirs)
install(TARGETS exercise4-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
