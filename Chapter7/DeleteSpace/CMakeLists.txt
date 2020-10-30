include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(DeleteSpace DeleteSpace.c DeleteSpace_main.c EnterString.c PrintString.c)

target_link_libraries(DeleteSpace public_lib)