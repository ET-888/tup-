cmake_minimum_required(VERSION 3.16)
project(opencv_camera_demo)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(opencv_camera video_capture.cpp)

target_link_libraries(opencv_camera ${OpenCV_LIBS})