cmake_minimum_required(VERSION 3.5)

project(project3 LANGUAGES C)

add_executable(project3 main.c)

include(GNUInstallDirs)
install(TARGETS project3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
