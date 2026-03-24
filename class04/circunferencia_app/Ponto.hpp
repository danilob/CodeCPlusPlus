#ifndef PONTO_HPP
#define PONTO_HPP

#include <string>
#include <iostream>

using namespace std;

class Ponto {
public:
    double _x;
    double _y;

    // Construtor padrão
    Ponto();
    Ponto(double x, double y);
    void imprimir() const;

    
};

#endif