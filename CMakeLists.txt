cmake_minimum_required(VERSION 3.11)

project(Indie)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules")

find_package(Irrlicht)

IF (Irrlicht_FOUND)
    message(STATUS "==> Irrlicht found! <==")
    include_directories(${Irrlicht_INCLUDE_DIRS})

    FILE(GLOB
        SRCS
            src/main.cpp)

    add_executable(
            bomberman
            ${SRCS}
    )

    TARGET_LINK_LIBRARIES(bomberman
        ${Irrlicht_LIBRARIES}
    )
    message(STATUS "==> Build complete! <==")
ENDIF (Irrlicht_FOUND)