include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(TwoDimensionalArray TwoDimensionalArray.c)

target_link_libraries(TwoDimensionalArray public_lib)