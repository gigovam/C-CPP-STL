cmake_minimum_required(VERSION 3.5)

project(exercise7-4b LANGUAGES C)

add_executable(exercise7-4b main.c)

include(GNUInstallDirs)
install(TARGETS exercise7-4b
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
