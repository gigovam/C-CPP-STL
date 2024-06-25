cmake_minimum_required(VERSION 3.5)

project(exercise6-7 LANGUAGES C)

add_executable(exercise6-7 main.c)

include(GNUInstallDirs)
install(TARGETS exercise6-7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
