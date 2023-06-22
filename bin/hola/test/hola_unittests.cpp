#include <catch2/catch_test_macros.hpp>

#include "../src/hola.hpp"

TEST_CASE("Correct greeting in Spanish", "[greet][hola][spanish]")
{
    REQUIRE(hola("Mundo") == "Hola, Mundo!");
    REQUIRE(hola("Alex") == "Hola, Alex!");
    REQUIRE(hola("x") == "Hola, x!");
}
