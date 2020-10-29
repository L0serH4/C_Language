
include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(StudentGrade StudentGrade.c)

target_link_libraries(StudentGrade public_lib)