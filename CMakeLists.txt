cmake_minimum_required(VERSION 3.30.0)
project(opengl_thing VERSION 1.0.0)

find_package(OpenGL REQUIRED)

add_executable(opengl_thing 
    src/config.h 
    src/main.cpp 
    src/glad.c
)

target_include_directories(opengl_thing PRIVATE dependencies)

target_link_libraries(opengl_thing glfw OpenGL::GL)