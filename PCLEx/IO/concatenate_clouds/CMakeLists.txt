cmake_minimum_required(VERSION 2.6)
project(concatenate_clouds)

find_package(PCL 1.8 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(concatenate_clouds concatenate_clouds.cpp)

target_link_libraries(concatenate_clouds ${PCL_LIBRARIES})

install(TARGETS concatenate_clouds RUNTIME DESTINATION bin)