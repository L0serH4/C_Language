include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(UpperToLower UpperToLower.c)

target_link_libraries(UpperToLower public_lib)