cmake_minimum_required(VERSION 2.6)
project(extract_indices)

find_package(PCL 1.8 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(extract_indices extract_indices.cpp)

target_link_libraries(extract_indices ${PCL_LIBRARIES})

install(TARGETS extract_indices RUNTIME DESTINATION bin)
