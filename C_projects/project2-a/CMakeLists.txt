cmake_minimum_required(VERSION 3.5)

project(project2-a LANGUAGES C)

add_executable(project2-a main.c)

include(GNUInstallDirs)
install(TARGETS project2-a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
