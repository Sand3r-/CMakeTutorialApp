cmake_minimum_required(VERSION 3.14)
project("neuron" CXX)
set(INCLUDE_DIRECTORIES ${CMAKE_SOURCE_DIR}/include)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
include(FetchContent)
set(SPDLOG_PROJECT spdlog_lib)
set(FETCHCONTENT_QUIET OFF)
FetchContent_Declare(
  ${SPDLOG_PROJECT}
  GIT_REPOSITORY      "https://github.com/gabime/spdlog.git"
  GIT_TAG             v1.x
  GIT_SHALLOW         TRUE
  CMAKE_ARGS          SPDLOG_BUILD_EXAMPLE=OFF
  CMAKE_ARGS          SPDLOG_BUILD_TESTS=OFF
  UPDATE_DISCONNECTED TRUE
)
FetchContent_MakeAvailable(${SPDLOG_PROJECT})
add_subdirectory(src)
