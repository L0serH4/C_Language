include_directories(${CMAKE_SOURCE_DIR}/Public)

add_executable(Deposit Deposit.c)

target_link_libraries(Deposit  public_lib)