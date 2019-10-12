find_package(OpenMP REQUIRED)
add_library(${MATH_TARGET} math_funcs.cpp)
target_include_directories(${MATH_TARGET} PRIVATE ${INCLUDE_DIRECTORIES} OpenMP::OpenMP_CXX)
