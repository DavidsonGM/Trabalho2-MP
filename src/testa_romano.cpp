// Copyright 2021 David Mendes


#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/romano.hpp"

TEST_CASE("E algarismo romano", "[romanos]" ) {
    REQUIRE(ConverterAlgarismo('I') == 1);
    REQUIRE(ConverterAlgarismo('V') == 5);
    REQUIRE(ConverterAlgarismo('X') == 10);
}
