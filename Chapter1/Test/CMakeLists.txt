include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(Test Test.c)

target_link_libraries(Test public_lib)