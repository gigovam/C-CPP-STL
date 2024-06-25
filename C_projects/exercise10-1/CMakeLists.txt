cmake_minimum_required(VERSION 3.5)

project(exercise10-1 LANGUAGES C)

add_executable(exercise10-1 main.c)

include(GNUInstallDirs)
install(TARGETS exercise10-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
