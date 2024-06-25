cmake_minimum_required(VERSION 3.5)

project(project1 LANGUAGES C)

add_executable(project1 main.c)

include(GNUInstallDirs)
install(TARGETS project1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
