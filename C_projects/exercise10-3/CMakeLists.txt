cmake_minimum_required(VERSION 3.5)

project(exercise10-3 LANGUAGES C)

add_executable(exercise10-3 main.c)

include(GNUInstallDirs)
install(TARGETS exercise10-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
