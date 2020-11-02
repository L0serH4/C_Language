include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(PointerToFunction PointerToFunction.c)

target_link_libraries(PointerToFunction public_lib)