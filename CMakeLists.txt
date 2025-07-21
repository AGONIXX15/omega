cmake_minimum_required(VERSION 3.25)
project(omega)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})



# parser
# add_subdirectory(src/parser)
# target_link_libraries(${PROJECT_NAME} PRIVATE parser)

# lexer
add_subdirectory(src/lexer)
target_link_libraries(${PROJECT_NAME} PRIVATE lexer)
