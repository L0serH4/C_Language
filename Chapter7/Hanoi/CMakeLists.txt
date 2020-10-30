include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(Hanoi Hanoi.c)

target_link_libraries(Hanoi public_lib)