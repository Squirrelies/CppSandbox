cmake_minimum_required(VERSION 3.25)
project (CppSandbox)

option(BUILD_SHARED_LIBS "Build using shared libraries" OFF)
option(BUILD_OUR_SHARED_LIBS "Build our libraries as shared libraries" ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(SetFromEnv)
include(SetProjectCompileOptions)
include(SetProjectCompileDefinitions)
include(SetProjectLinkOptions)
include(ProjectSettings)

add_subdirectory(src/Common)
add_subdirectory(src/App)
