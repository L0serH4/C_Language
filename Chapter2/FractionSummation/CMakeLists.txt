include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(FractionSummation FractionSummation.c)

target_link_libraries(FractionSummation public_lib)