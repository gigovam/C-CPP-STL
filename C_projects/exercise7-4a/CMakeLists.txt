cmake_minimum_required(VERSION 3.5)

project(exercise7-4a LANGUAGES C)

add_executable(exercise7-4a main.c)

include(GNUInstallDirs)
install(TARGETS exercise7-4a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
