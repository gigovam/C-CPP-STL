cmake_minimum_required(VERSION 3.5)

project(exercise1-4 LANGUAGES C)

add_executable(exercise1-4 main.c)

include(GNUInstallDirs)
install(TARGETS exercise1-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
