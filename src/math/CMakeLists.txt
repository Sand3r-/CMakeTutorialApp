find_package(OpenMP REQUIRED)
add_library(${MATH_TARGET} math.cpp)
target_include_directories(${MATH_TARGET} PRIVATE ${INCLUDE_DIRECTORIES} OpenMP_CXX_FLAGS)
