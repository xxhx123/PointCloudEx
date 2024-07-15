cmake_minimum_required(VERSION 2.6)
project(range_image_border_extraction)

find_package(PCL 1.8 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(range_image_border_extraction range_image_border_extraction.cpp)

target_link_libraries(range_image_border_extraction ${PCL_LIBRARIES})

install(TARGETS range_image_border_extraction RUNTIME DESTINATION bin)
