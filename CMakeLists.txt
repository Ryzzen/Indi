cmake_minimum_required(VERSION 3.11)

project(Indie)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules")
set(CMAKE_PATH ${CMAKE_PATH} "${CMAKE_SOURCE_DIR}/")

IF (MSVC)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_PATH}/bin)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_PATH}/bin)
ELSE (MSVC)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_PATH}/bin)
ENDIF (MSVC)

find_package(Irrlicht)

IF (Irrlicht_FOUND)
    message(STATUS "==> Irrlicht found! <==")
    include_directories(${Irrlicht_INCLUDE_DIRS})

    file(GLOB
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