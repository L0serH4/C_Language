include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(FunctionToPointer FunctionToPointer.c)

target_link_libraries(FunctionToPointer public_lib)