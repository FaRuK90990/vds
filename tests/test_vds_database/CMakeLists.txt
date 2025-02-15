cmake_minimum_required(VERSION 2.8)
project(test_vds_database)
enable_testing()

FILE(GLOB HEADER_FILES *.h)
FILE(GLOB SOURCE_FILES *.cpp)
ADD_MSVC_PRECOMPILED_HEADER("stdafx.h" "stdafx.cpp" SOURCE_FILES)


include_directories(${vds_core_SOURCE_DIR})
include_directories(${vds_database_SOURCE_DIR})
include_directories(${test_libs_SOURCE_DIR})

add_executable(test_vds_database ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(
  test_vds_database
  vds_core
  vds_database
  test_libs
  ${GTEST_LIBRARIES}
  ${CMAKE_THREAD_LIBS_INIT})

add_test(
    NAME runUnitTests
    COMMAND test_vds_database
)
