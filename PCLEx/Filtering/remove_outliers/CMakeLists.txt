cmake_minimum_required(VERSION 2.6)
project(remove_outliers)

find_package(PCL 1.8 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(remove_outliers remove_outliers.cpp)

target_link_libraries(remove_outliers ${PCL_LIBRARIES})

install(TARGETS remove_outliers RUNTIME DESTINATION bin)
