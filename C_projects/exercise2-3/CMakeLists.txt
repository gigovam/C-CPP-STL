cmake_minimum_required(VERSION 3.5)

project(exercise2-3 LANGUAGES C)

add_executable(exercise2-3 main.c)

include(GNUInstallDirs)
install(TARGETS exercise2-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
