include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(Equation Equation.c)

target_link_libraries(Equation public_lib)