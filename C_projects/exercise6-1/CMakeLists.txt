cmake_minimum_required(VERSION 3.5)

project(exercise6-1 LANGUAGES C)

add_executable(exercise6-1 main.c)

include(GNUInstallDirs)
install(TARGETS exercise6-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
