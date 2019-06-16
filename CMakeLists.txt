cmake_minimum_required(VERSION 3.11)

project(Indie)

set(CMAKE_AUTOMOC ON)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules")
set(CMAKE_PATH ${CMAKE_PATH} "${CMAKE_SOURCE_DIR}/")
set(GCC_BOOST_FLAGS  "-lboost_system -lboost_date_time -lboost_thread -lboost_serialization")
set(CMAKE_EXE_LINKER_FLAGS  "${GCC_BOOST_FLAGS}")

add_definitions(${GCC_BOOST_FLAGS})

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
        HDRS
            src/event.hpp
            src/IndiReceiver/IndiReceiver.hpp
            src/Menu/menu.hpp
            src/Keyboard/Keyboard.hpp
            src/IrrManager/IrrManager.cpp
            src/Game/game.hpp
			src/GameObject/Scene.hpp
            src/GameObject/GameObject.hpp
            src/GameObject/Bomberman/Bomberman.hpp
            src/Clock/clock.hpp
            src/GameObject/Bombes/bombes.hpp
            src/GameObject/Walls/Walls.hpp
            src/GameObject/Bombes/Explosion/Explosion.hpp)

    file(GLOB
        SRCS
            src/main.cpp
            src/IndiReceiver/IndiReceiver.cpp
            src/Menu/menu.cpp
            src/Keyboard/Keyboard.cpp
            src/IrrManager/IrrManager.cpp
            src/Game/game.cpp
            src/GameObject/Scene.cpp
            src/GameObject/Bomberman/Bomberman.cpp
            src/Clock/clock.cpp
            src/GameObject/Bombes/bombes.cpp
            src/Saves/Saves.cpp
            src/GameObject/Bombes/Explosion/Explosion.cpp)

    add_executable(
            bomberman
            ${HDRS}
            ${SRCS}
    )

    TARGET_LINK_LIBRARIES(bomberman
        ${Irrlicht_LIBRARIES}
    )

    message(STATUS "==> Build complete! <==")
ENDIF (Irrlicht_FOUND)