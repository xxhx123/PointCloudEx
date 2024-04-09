cmake_minimum_required(VERSION 2.6)
project(pcdwrite)

find_package(PCL 1.8 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(pcdwrite pcdwrite.cpp)

target_link_libraries(pcdwrite ${PCL_LIBRARIES})

install(TARGETS pcdwrite RUNTIME DESTINATION bin)