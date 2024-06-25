cmake_minimum_required(VERSION 3.5)

project(example LANGUAGES C)

add_executable(example main.c)

include(GNUInstallDirs)
install(TARGETS example
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
