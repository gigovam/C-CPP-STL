cmake_minimum_required(VERSION 3.5)

project(exercise8-1 LANGUAGES C)

add_executable(exercise8-1 main.c)

include(GNUInstallDirs)
install(TARGETS exercise8-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
