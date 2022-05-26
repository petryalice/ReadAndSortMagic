cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)


project(NewC)
find_package(OpenCV REQUIRED)

add_executable(NewC main.cpp)

target_link_libraries(NewC ${OpenCV_LIBS})






