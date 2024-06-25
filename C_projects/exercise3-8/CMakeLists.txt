cmake_minimum_required(VERSION 3.5)

project(exercise3-8 LANGUAGES C)

add_executable(exercise3-8 main.c)

include(GNUInstallDirs)
install(TARGETS exercise3-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
