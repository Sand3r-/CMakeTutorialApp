cmake_minimum_required(VERSION 3.9)
project("neuron" CXX)
set(INCLUDE_DIRECTORIES ${CMAKE_SOURCE_DIR}/include)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
include(ExternalProject)
set(EXTERNAL ${CMAKE_BINARY_DIR}/3rdparty)
set(SPDLOG_INSTALL_DIR ${EXTERNAL}/install)
ExternalProject_Add(
    spdlog_lib
    PREFIX          ${EXTERNAL}
    CMAKE_ARGS      -DCMAKE_INSTALL_PREFIX=${SPDLOG_INSTALL_DIR}
    GIT_REPOSITORY  https://github.com/gabime/spdlog.git
    GIT_TAG         v1.x
    # GIT_SHALLOW     TRUE
    # CMAKE_ARGS      -DSPDLOG_BUILD_EXAMPLE=OFF
    # CMAKE_ARGS      -DSPDLOG_BUILD_TESTS=OFF
)
add_subdirectory(src)