project(vds_crypto CXX C)
cmake_minimum_required(VERSION 2.6.2)

if(ANDROID_PLATFORM)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../../cmake")
endif(ANDROID_PLATFORM)

find_package (OpenSSL REQUIRED)
set(OPENSSL_USE_STATIC_LIBS TRUE)

FILE(GLOB HEADER_FILES *.h)
FILE(GLOB PRIVATE_HEADER_FILES private/*.h)
FILE(GLOB SOURCE_LIB *.cpp)

ADD_MSVC_PRECOMPILED_HEADER("stdafx.h" "stdafx.cpp" SOURCE_LIB)

add_library(vds_crypto STATIC ${PRIVATE_HEADER_FILES} ${SOURCE_LIB} ${HEADER_FILES})

target_include_directories(vds_crypto
	PRIVATE
		${vds_core_INCLUDE_DIRS}
		${OPENSSL_INCLUDE_DIR}
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR})


target_link_libraries(
  vds_crypto
  vds_core
  ${OPENSSL_LIBRARIES}
  ${CMAKE_THREAD_LIBS_INIT}
)
