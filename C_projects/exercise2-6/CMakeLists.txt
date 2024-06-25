cmake_minimum_required(VERSION 3.5)

project(exercise2-6 LANGUAGES C)

add_executable(exercise2-6 main.c)

include(GNUInstallDirs)
install(TARGETS exercise2-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
