include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(BiggestThreeNumber BiggestThreeNumber.c)

target_link_libraries(BiggestThreeNumber public_lib)