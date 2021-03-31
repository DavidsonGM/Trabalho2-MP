// Copyright 2021 David Mendes

#include "../include/romano.hpp"

bool EntradaValida(std::string entrada) {
}

int ConverterAlgarismo(char algarismo) {
    switch (algarismo) {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    default:
        return -1;
    }
}

int RomanosParaDecimal(std::string entrada) {
}
