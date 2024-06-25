cmake_minimum_required(VERSION 3.5)

project(exercise7-5a LANGUAGES C)

add_executable(exercise7-5a main.c)

include(GNUInstallDirs)
install(TARGETS exercise7-5a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
