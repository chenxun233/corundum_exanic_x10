cmake_minimum_required(VERSION 3.10)
project(mqnic_tools C)

add_subdirectory(src_lib)
add_subdirectory(src_mqnic-config) 
add_subdirectory(src_mqnic-dump)
add_subdirectory(src_mqnic-fw)
add_subdirectory(src_mqnic-bmc)
add_subdirectory(src_mqnic-xcvr)
add_subdirectory(src_perout)


