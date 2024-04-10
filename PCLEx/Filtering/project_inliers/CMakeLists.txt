cmake_minimum_required(VERSION 2.6)
project(project_inliers)

find_package(PCL 1.8 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(project_inliers project_inliers.cpp)

target_link_libraries(project_inliers ${PCL_LIBRARIES})

install(TARGETS project_inliers RUNTIME DESTINATION bin)
