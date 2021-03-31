// Copyright 2021 David Mendes

#include "../include/romano.hpp"

bool EntradaValida(std::string entrada) {
    if (entrada.size() > 30)
        return false;
    for (int i = 0; i < entrada.size(); i++) {
        if (
            entrada[i] != 'I' && entrada[i] != 'V' && entrada[i] != 'X' &&
            entrada[i] != 'L' && entrada[i] != 'C' &&
            entrada[i] != 'D' && entrada[i] != 'M'
        )
            return false;
    }
    return true;
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
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return -1;
    }
}

int RomanosParaDecimal(std::string entrada) {
    if (!EntradaValida(entrada))
        return -1;
    return 1;
}
