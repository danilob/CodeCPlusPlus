#ifndef CIRCUNFERENCIA_HPP
#define CIRCUNFERENCIA_HPP

#include <string>
#include <iostream>
#include "Ponto.hpp"

using namespace std;

class Circunferencia {
public:
    Ponto* _centro;
    double _raio;
    // Construtor padrão
    Circunferencia(Ponto* centro, double raio);
    ~Circunferencia();

    double calcularArea();
    
};

#endif