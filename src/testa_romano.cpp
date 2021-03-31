// Copyright 2021 David Mendes


#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/romano.hpp"

TEST_CASE("Algarismo romano", "[romanos]" ) {
    REQUIRE(ConverterAlgarismo('I') == 1);
    REQUIRE(ConverterAlgarismo('V') == 5);
    REQUIRE(ConverterAlgarismo('X') == 10);
    REQUIRE(ConverterAlgarismo('L') == 50);
    REQUIRE(ConverterAlgarismo('C') == 100);
    REQUIRE(ConverterAlgarismo('D') == 500);
    REQUIRE(ConverterAlgarismo('M') == 1000);
}

TEST_CASE("Entrada invalida", "[romanos]") {
    REQUIRE(RomanosParaDecimal("AA") == -1);
    REQUIRE(RomanosParaDecimal("ii") == -1);
    REQUIRE(RomanosParaDecimal("MMMI") == -1);
    REQUIRE(RomanosParaDecimal("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM") == -1);
    REQUIRE(RomanosParaDecimal("IIII") == -1);
    REQUIRE(RomanosParaDecimal("XM") == -1);
    REQUIRE(RomanosParaDecimal("LL") == -1);
    REQUIRE(RomanosParaDecimal("IL") == -1);
}