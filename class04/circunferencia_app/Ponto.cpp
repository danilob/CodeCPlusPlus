#include "Ponto.hpp"

Ponto::Ponto() {
    _x = 0.0;
    _y = 0.0;
}

Ponto::Ponto(double x, double y): _x(x), _y(y) {}

void Ponto::imprimir() const {
    cout << "Ponto(" << _x << ", " << _y << ")" << endl;
}