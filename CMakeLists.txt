cmake_minimum_required(VERSION 3.12)
project(game_of_life)

# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Dependencies
set(RAYLIB_VERSION 5.0)
find_package(raylib ${RAYLIB_VERSION} QUIET) # QUIET or REQUIRED

# Set output bin directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# add_subdirectory(src)
add_subdirectory(lib_files)

# Executables
add_executable(${PROJECT_NAME} executables/main.cpp)

# Link Libs
target_link_libraries(${PROJECT_NAME} raylib lib)

