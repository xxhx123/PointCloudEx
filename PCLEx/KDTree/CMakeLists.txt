cmake_minimum_required(VERSION 2.6)
project(kdtree_search)

find_package(PCL 1.8 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(kdtree_search kdtree_search.cpp)

target_link_libraries(kdtree_search ${PCL_LIBRARIES})

install(TARGETS kdtree_search RUNTIME DESTINATION bin)