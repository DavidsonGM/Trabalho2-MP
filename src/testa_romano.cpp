// Copyright 2021 David Mendes


#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/romano.hpp"

TEST_CASE("E algarismo romano", "[romanos]" ) {
    REQUIRE(ConverterAlgarismo('I') == 1);
    REQUIRE(ConverterAlgarismo('V') == 5);
    REQUIRE(ConverterAlgarismo('X') == 10);
    REQUIRE(ConverterAlgarismo('L') == 50);
    REQUIRE(ConverterAlgarismo('C') == 100);
    REQUIRE(ConverterAlgarismo('D') == 500);
    REQUIRE(ConverterAlgarismo('M') == 1000);
}
