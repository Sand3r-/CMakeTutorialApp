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