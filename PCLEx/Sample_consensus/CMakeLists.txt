cmake_minimum_required(VERSION 2.6)
project(random_sample_consensus)

find_package(PCL 1.8 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(random_sample_consensus random_sample_consensus.cpp)

target_link_libraries(random_sample_consensus ${PCL_LIBRARIES})

install(TARGETS random_sample_consensus RUNTIME DESTINATION bin)
