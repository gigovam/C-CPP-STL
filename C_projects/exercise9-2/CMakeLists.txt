cmake_minimum_required(VERSION 3.5)

project(exercise9-2 LANGUAGES C)

add_executable(exercise9-2 main.c)

include(GNUInstallDirs)
install(TARGETS exercise9-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
