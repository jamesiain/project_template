add_executable( hello_unittests )

target_link_libraries( hello_unittests
    PRIVATE
                Catch2::Catch2WithMain
)

target_include_directories( hello_unittests
    PRIVATE
                "../src"
  )

target_sources( hello_unittests
    PRIVATE
                "../src/hello.cpp"
                "hello_unittests.cpp"
)

catch_discover_tests( hello_unittests )
