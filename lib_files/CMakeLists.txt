file(GLOB SRC_LIST_SC *.cpp)

# Define the lib library
add_library(lib SHARED ${SRC_LIST_SC})

# Link the lib library with raylib
target_link_libraries(lib PUBLIC raylib)

# Specify include directories for the lib library
target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
