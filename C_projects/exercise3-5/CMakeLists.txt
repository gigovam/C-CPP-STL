cmake_minimum_required(VERSION 3.5)

project(exercise3-5 LANGUAGES C)

add_executable(exercise3-5 main.c)

include(GNUInstallDirs)
install(TARGETS exercise3-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
