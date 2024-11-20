cmake_minimum_required(VERSION 3.10)
project(statki)


# Add your executable
add_executable(${PROJECT_NAME}  
    src/main.cpp
    src/GameBoard.cpp
    src/Game.cpp
    src/GameEntities.cpp
)

# Find ncurses
find_package(Curses REQUIRED)

# Include ncurses headers
include_directories(${CURSES_INCLUDE_DIR})

# Link ncurses library
target_link_libraries(${PROJECT_NAME} PRIVATE ${CURSES_LIBRARIES})
