cmake_minimum_required(VERSION 3.5)

project(exercise11-2 LANGUAGES C)

add_executable(exercise11-2 main.c)

include(GNUInstallDirs)
install(TARGETS exercise11-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
