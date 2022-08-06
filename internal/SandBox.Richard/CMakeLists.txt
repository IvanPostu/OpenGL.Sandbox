cmake_minimum_required(VERSION 3.8 FATAL_ERROR)


project(SandBoxRichard)


message(STATUS "${PROJECT_NAME} build mode: ${CMAKE_BUILD_TYPE}")


add_executable(${PROJECT_NAME} src/main.cpp)


add_subdirectory(
  ${CMAKE_CURRENT_SOURCE_DIR}/../Adder 
  ${CMAKE_CURRENT_SOURCE_DIR}/_deps_internal/Adder)



target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)


# Use include from 'internal'
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../ )

# glfw
add_subdirectory(
  ${CMAKE_CURRENT_SOURCE_DIR}/../../external/glfw 
  ${CMAKE_CURRENT_SOURCE_DIR}/_deps_external/glfw)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../../external/glfw/include)
target_link_libraries(${PROJECT_NAME} glfw )

# glad
add_subdirectory(
  ${CMAKE_CURRENT_SOURCE_DIR}/../glad 
  ${CMAKE_CURRENT_SOURCE_DIR}/_deps_internal/glad)

# glad
# add_subdirectory(
#   ${CMAKE_CURRENT_SOURCE_DIR}/../../external/glad 
#   ${CMAKE_CURRENT_SOURCE_DIR}/_deps_external/glad)
# target_include_directories(${PROJECT_NAME} PRIVATE  ${CMAKE_CURRENT_SOURCE_DIR}/../../external/glad)
# target_link_libraries(${PROJECT_NAME} glad)

target_link_libraries(${PROJECT_NAME} adder glad)


set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/ )
  

