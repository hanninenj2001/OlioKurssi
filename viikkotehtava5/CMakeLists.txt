cmake_minimum_required(VERSION 3.19)
project(viikkotehtava5 LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(viikkotehtava5
    WIN32 MACOSX_BUNDLE
    main.cpp



    seuraaja.h seuraaja.cpp
    notifikaattori.h notifikaattori.cpp
)

target_link_libraries(viikkotehtava5
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS viikkotehtava5
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET viikkotehtava5
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
