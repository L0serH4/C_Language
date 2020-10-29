include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(Factorial Factorial.c)

target_link_libraries(Factorial public_lib)