cmake_minimum_required(VERSION 3.5)

project(exercise7-2 LANGUAGES C)

add_executable(exercise7-2 main.c)

include(GNUInstallDirs)
install(TARGETS exercise7-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
