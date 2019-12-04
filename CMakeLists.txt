cmake_minimum_required(VERSION 3.15)
project(fire_particle)

set(CMAKE_CXX_STANDARD 11)


set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${SDL2_SOURCE_DIR}/cmake")

set(SOURCE_FILES main.cpp screen/Screen.cpp screen/Screen.h particle/Particle.cpp particle/Particle.h swarm/Swarm.cpp swarm/Swarm.h)
add_executable(fire_particle ${SOURCE_FILES})

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)

include_directories(${SDL2_INCLUDE_DIR}
        ${SDL2_IMAGE_INCLUDE_DIR}
        ${SDL2_TTF_INCLUDE_DIR})


target_link_libraries(fire_particle ${SDL2_LIBRARY}
        ${SDL2_IMAGE_LIBRARIES}
        ${SDL2_TTF_LIBRARIES})
