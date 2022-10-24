cmake_minimum_required(VERSION 3.10)
project(template)

set(CMAKE_CXX_STANDARD 14)

# define library called queue that can imported into other targets via
# 'target_link_libraries'
add_library(mymath src/operations.c src/stack.c)
target_include_directories(mymath PUBLIC include)

# define executable named main for experimenting and debugging code
add_executable(main src/main.c)
target_link_libraries(main mymath)