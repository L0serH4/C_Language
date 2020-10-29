include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(PrimeNumber PrimeNumber.c)

target_link_libraries(PrimeNumber public_lib)
