cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(BlockChainService)

message(STATUS "${PROJECT_NAME} build mode: ${CMAKE_BUILD_TYPE}")

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(internal/Adder)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)

target_include_directories(${PROJECT_NAME} PUBLIC internal)

target_link_directories(${PROJECT_NAME} PRIVATE Adder)

target_link_libraries(${PROJECT_NAME} adder)

set_target_properties(${PROJECT_NAME} PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/ )
  