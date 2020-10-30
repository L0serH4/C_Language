include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(FactorialRecursive FactorialRecursive.c)

target_link_libraries(FactorialRecursive public_lib)