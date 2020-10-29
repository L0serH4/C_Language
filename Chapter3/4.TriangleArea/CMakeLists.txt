include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(TriangleArea TriangleArea.c)

target_link_libraries(TriangleArea public_lib)