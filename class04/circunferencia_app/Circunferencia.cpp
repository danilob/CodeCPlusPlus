#include "Circunferencia.hpp"
#include <cmath>

Circunferencia::Circunferencia(Ponto* centro, double raio) : _centro(centro), _raio(raio) {}

Circunferencia::~Circunferencia() {
    delete _centro;
}

double Circunferencia::calcularArea() {
    return M_PI * pow(_raio, 2);
}