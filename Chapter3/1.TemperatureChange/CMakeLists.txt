include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(TemperatureChange TemperatureChange.c)

target_link_libraries(TemperatureChange public_lib)