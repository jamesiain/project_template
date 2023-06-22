add_executable( hola_unittests )

target_link_libraries( hola_unittests
    PRIVATE
                Catch2::Catch2WithMain
)

target_include_directories( hola_unittests
    PRIVATE
                "../src"
  )

target_sources( hola_unittests
    PRIVATE
                "../src/hola.cpp"
                "hola_unittests.cpp"
)

catch_discover_tests( hola_unittests )
