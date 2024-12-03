cmake_minimum_required(VERSION 3.10)
project(statki)

set(CMAKE_CXX_STANDARD 17)          
set(CMAKE_CXX_STANDARD_REQUIRED ON) 
set(CMAKE_CXX_EXTENSIONS OFF)

# Add your executable
add_executable(${PROJECT_NAME}  
    src/main.cpp
    src/GameBoard.cpp
    src/Game.cpp
    src/GameEntities.cpp
    src/CONSTANTS.hpp
)

# Find ncurses
find_package(Curses REQUIRED)

# Include ncurses headers
include_directories(${CURSES_INCLUDE_DIR})

# Link ncurses library
target_link_libraries(${PROJECT_NAME} PRIVATE ${CURSES_LIBRARIES})
