include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(CountNumber CountNumber.c)

target_link_libraries(CountNumber public_lib)