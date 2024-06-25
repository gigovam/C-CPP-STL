cmake_minimum_required(VERSION 3.5)

project(C_exercises LANGUAGES C)

add_executable(C_exercises exercise1-1.c

)

include(GNUInstallDirs)
install(TARGETS C_exercises
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
