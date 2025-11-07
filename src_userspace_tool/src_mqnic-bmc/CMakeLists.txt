# Find all .c files in the current directory
file(GLOB_RECURSE mqnic_config_sources "*.c")

# Add the executable
add_executable(mqnic-bmc ${mqnic_config_sources})

# Link against libmqnic.a
target_link_libraries(mqnic-bmc PRIVATE mqnic)
