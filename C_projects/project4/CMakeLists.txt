cmake_minimum_required(VERSION 3.5)

project(project4 LANGUAGES C)

add_executable(project4 main.c)

include(GNUInstallDirs)
install(TARGETS project4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
