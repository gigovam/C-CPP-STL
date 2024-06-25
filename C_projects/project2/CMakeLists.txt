cmake_minimum_required(VERSION 3.5)

project(project2 LANGUAGES C)

add_executable(project2 main.c)

include(GNUInstallDirs)
install(TARGETS project2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
