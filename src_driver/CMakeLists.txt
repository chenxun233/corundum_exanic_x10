cmake_minimum_required(VERSION 3.10)
project(mqnic-driver C)

# Get kernel release version to find headers
execute_process(
    COMMAND uname -r
    OUTPUT_VARIABLE KERNEL_RELEASE
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

set(KDIR "/lib/modules/${KERNEL_RELEASE}/build")

if(NOT EXISTS ${KDIR})
    message(FATAL_ERROR "Kernel headers not found at ${KDIR}. Please install kernel headers for your running kernel (e.g., 'sudo apt install linux-headers-$(uname -r)').")
endif()

# Custom target to build the kernel module using the Makefile's logic
add_custom_target(mqnic-driver ALL
    COMMAND ${CMAKE_MAKE_PROGRAM} -C ${KDIR} M=${CMAKE_CURRENT_SOURCE_DIR} modules
    COMMENT "Building mqnic kernel module"
    VERBATIM
)

# Custom target to clean the module build. Renamed from 'clean' to avoid conflict.
add_custom_target(driver-clean
    COMMAND ${CMAKE_MAKE_PROGRAM} -C ${KDIR} M=${CMAKE_CURRENT_SOURCE_DIR} clean
    COMMENT "Cleaning mqnic kernel module build"
    VERBATIM
)

