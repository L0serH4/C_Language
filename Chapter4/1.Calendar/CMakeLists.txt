include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(Calendar Calendar.c)

target_link_libraries(Calendar public_lib)
