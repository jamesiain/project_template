#include <catch2/catch_test_macros.hpp>

#include "../src/hello.hpp"

TEST_CASE("Correct greeting in English", "[greet][hello][english]")
{
    REQUIRE(hello("World") == "Hello, World!");
    REQUIRE(hello("Alex") == "Hello, Alex!");
    REQUIRE(hello("x") == "Hello, x!");
}
