include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(SelectSort SelectSort.c)

target_link_libraries(SelectSort public_lib)