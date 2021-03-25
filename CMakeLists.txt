cmake_minimum_required(VERSION 3.0.0)
project(BushRPG VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB Sources
          *.cpp
          Bush/*.hpp
          Bush/*.cpp)

include_directories()

add_executable(${PROJECT_NAME} ${Sources})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
