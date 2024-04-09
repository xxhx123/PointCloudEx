cmake_minimum_required(VERSION 2.6)
project(octree_change_detection)

find_package(PCL 1.8 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(octree_change_detection octree_change_detection.cpp)

target_link_libraries(octree_change_detection ${PCL_LIBRARIES})

install(TARGETS octree_change_detection RUNTIME DESTINATION bin)