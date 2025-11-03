cmake_minimum_required(VERSION 3.27.7)
project(vscode-cmake-tools-bug-example CXX)
add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME}
    PRIVATE
        src/main.cpp
        src/a.cpp
        src/b.cpp
)
