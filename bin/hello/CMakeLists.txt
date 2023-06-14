add_executable( hello )

# target_link_libraries( hello
#     PRIVATE
#                 CommonIncludes
# )

# target_include_directories( hello
#     PRIVATE
#                 "$ENV{QNX_TARGET}/usr/include"
# )

target_sources( hello
    PRIVATE
                "src/hello.cpp"
                "src/hello.hpp"
                "src/main.cpp"
)

if( BUILD_TESTING )
  add_subdirectory( test )
endif()
