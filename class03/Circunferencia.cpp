#include "Circunferencia.hpp"

Circunferencia::Circunferencia(double x, double y, double raio)
{
    _x = x;
    _y = y;
    _raio = raio;
}

double Circunferencia::calcularArea()
{
    return M_PI * pow(_raio, 2);
}

double Circunferencia::calcularComprimento()
{
    return 2 * M_PI * _raio;
}