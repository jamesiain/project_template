enable_testing()

find_package(Catch2 3 REQUIRED)

add_executable(hello_tests ../src/hello.cpp hello_tests.cpp)
target_link_libraries(hello_tests PRIVATE Catch2::Catch2WithMain)
