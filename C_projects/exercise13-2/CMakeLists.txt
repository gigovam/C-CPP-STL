cmake_minimum_required(VERSION 3.5)

project(exercise13-2 LANGUAGES C)

add_executable(exercise13-2 main.c)

include(GNUInstallDirs)
install(TARGETS exercise13-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
