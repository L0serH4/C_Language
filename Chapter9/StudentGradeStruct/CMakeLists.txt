include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(StudentGradeStruct StudentGradeStruct.c)

target_link_libraries(StudentGradeStruct public_lib)