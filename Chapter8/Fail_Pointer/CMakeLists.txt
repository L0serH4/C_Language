include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(Fail_Pointer Fail_Pointer.c)

target_link_libraries(Fail_Pointer public_lib)