# Find all .c files in the current directory
file(GLOB_RECURSE libmqnic_sources "*.c")

# Add the library
add_library(mqnic STATIC ${libmqnic_sources})

# Public include directories
target_include_directories(mqnic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})