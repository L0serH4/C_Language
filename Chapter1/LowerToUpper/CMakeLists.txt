include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(LowerToUpper LowerToUpper.c)

target_link_libraries(LowerToUpper public_lib)