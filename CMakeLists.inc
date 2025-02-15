set(CMAKE_INCLUDE_CURRENT_DIR ON)

IF(MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /await /std:c++17")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG -W4")
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -W4")
else()
  #set(LIBCXX_ENABLE_SHARED OFF)
  #set(LIBCXX_ENABLE_STATIC_ABI_LIBRARY ON)
  #set(LIBCXXABI_ENABLE_SHARED OFF)
  #set(LIBCXXABI_ENABLE_STATIC_ABI_LIBRARY ON)

  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -std=c++17 -fcoroutines-ts -fno-cxx-exceptions -stdlib=libc++ -Werror=return-type -Werror=unused-result -Werror=unused-value")
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++ -lc++ -lm")
ENDIF(MSVC)

MACRO(ADD_MSVC_PRECOMPILED_HEADER PrecompiledHeader PrecompiledSource SourcesVar)
#  IF(MSVC)
#    GET_FILENAME_COMPONENT(PrecompiledBasename ${PrecompiledHeader} NAME_WE)
#    SET(PrecompiledBinary "${CMAKE_CURRENT_BINARY_DIR}/${PrecompiledBasename}.pch")
#    SET(Sources ${${SourcesVar}})
#
#    SET_SOURCE_FILES_PROPERTIES(${Sources}
#                                PROPERTIES COMPILE_FLAGS "/Yu\"${PrecompiledHeader}\" /FI\"${PrecompiledHeader}\" /Fp\"${PrecompiledBinary}\""
#                                           OBJECT_DEPENDS "${PrecompiledBinary}")

#    SET_SOURCE_FILES_PROPERTIES(${PrecompiledSource}
#                                PROPERTIES COMPILE_FLAGS "/Yc\"${PrecompiledHeader}\" /Fp\"${PrecompiledBinary}\""
#                                           OBJECT_OUTPUTS "${PrecompiledBinary}")
    # Add precompiled header to SourcesVar
#    LIST(APPEND ${SourcesVar} ${PrecompiledSource})
#  ENDIF(MSVC)
ENDMACRO(ADD_MSVC_PRECOMPILED_HEADER)
