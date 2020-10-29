include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(LetterShift LetterShift.c)

target_link_libraries(LetterShift public_lib)
