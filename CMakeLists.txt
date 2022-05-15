cmake_minimum_required(VERSION 3.8 FATAL_ERROR)


project(BlockChainService)


message(STATUS "${PROJECT_NAME} build mode: ${CMAKE_BUILD_TYPE}")


add_executable(${PROJECT_NAME} src/main.cpp)


add_subdirectory(internal/Adder)
add_subdirectory(external/glfw)


target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)


target_include_directories(${PROJECT_NAME} 
  PUBLIC internal
  PUBLIC external/glfw/include
)


target_link_directories(${PROJECT_NAME} 
  PRIVATE Adder
  PRIVATE glfw
)


target_link_libraries(${PROJECT_NAME} adder glfw)


set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/ )
  

