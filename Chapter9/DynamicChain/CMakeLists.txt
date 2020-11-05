include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(DynamicChain DynamicChain.c)

target_link_libraries(DynamicChain public_lib)
