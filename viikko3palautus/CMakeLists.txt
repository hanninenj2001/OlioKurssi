cmake_minimum_required(VERSION 3.16)

project(viikko3palautus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikko3palautus main.cpp)

include(GNUInstallDirs)
install(TARGETS viikko3palautus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
