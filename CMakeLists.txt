cmake_minimum_required( VERSION 3.14 )

project( project_template
  DESCRIPTION "Template for a C/C++ project with CMake and Catch2"
    LANGUAGES   C CXX
)

set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_EXTENSIONS ON )


message( STATUS "Using toolchain file: ${CMAKE_TOOLCHAIN_FILE}" )

if( NOT CMAKE_CONFIGURATION_TYPES )
    set( default_build_type "Release" )

    if( NOT CMAKE_BUILD_TYPE )
        message( STATUS "Setting CMAKE_BUILD_TYPE to '${default_build_type}' as none was specified" )

        set( CMAKE_BUILD_TYPE "${default_build_type}" CACHE STRING "Choose type of build" FORCE )
        set_property( CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS
            "Debug"
            "Release"
            "MinSizeRel"
            "RelWithDebInfo"
        )
    endif()

    set( common_c_cxx_flags "-Wall -Wextra" )
    set( common_debug_flags "-g2 -O0" )
    set( common_release_flags "-O3 -DNDEBUG" )
    set( common_minsizerel_flags "-Os -DNDEBUG" )
    set( common_relwithdebinfo_flags "-O2 -g -DNDEBUG" )

    set( CMAKE_C_FLAGS "${common_c_cxx_flags}" )
    set( CMAKE_C_FLAGS_DEBUG "${common_debug_flags}" )
    set( CMAKE_C_FLAGS_RELEASE "${common_release_flags}" )
    set( CMAKE_C_FLAGS_MINSIZEREL "${common_minsizerel_flags}" )
    set( CMAKE_C_FLAGS_RELWITHDEBINFO "${common_relwithdebinfo_flags}" )

    set( CMAKE_CXX_FLAGS "${common_c_cxx_flags}" )
    set( CMAKE_CXX_FLAGS_DEBUG "${common_debug_flags}" )
    set( CMAKE_CXX_FLAGS_RELEASE "${common_release_flags}" )
    set( CMAKE_CXX_FLAGS_MINSIZEREL "${common_minsizerel_flags}" )
    set( CMAKE_CXX_FLAGS_RELWITHDEBINFO "${common_relwithdebinfo_flags}" )
endif()

add_subdirectory( bin )
