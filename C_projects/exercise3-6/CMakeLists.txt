cmake_minimum_required(VERSION 3.5)

project(exercise3-6 LANGUAGES C)

add_executable(exercise3-6 main.c)

include(GNUInstallDirs)
install(TARGETS exercise3-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
