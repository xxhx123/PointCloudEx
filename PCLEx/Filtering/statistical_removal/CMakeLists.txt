cmake_minimum_required(VERSION 2.6)
project(statistical_removal)

find_package(PCL 1.8 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(statistical_removal statistical_removal.cpp)

target_link_libraries(statistical_removal ${PCL_LIBRARIES})

install(TARGETS statistical_removal RUNTIME DESTINATION bin)
