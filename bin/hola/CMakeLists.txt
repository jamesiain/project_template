add_executable( hola )

# target_link_libraries( hola
#     PRIVATE
#                 CommonIncludes
# )

# target_include_directories( hola
#     PRIVATE
#                 "$ENV{QNX_TARGET}/usr/include"
# )

target_sources( hola
    PRIVATE
                "src/hola.cpp"
                "src/hola.hpp"
                "src/main.cpp"
)

if( BUILD_TESTING )
  add_subdirectory( test )
endif()
