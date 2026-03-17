#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

#include <cmath>

struct Circunferencia
{
    double _x, _y;
    double _raio;
    Circunferencia(double, double, double);
    double calcularArea();
    double calcularComprimento();
};

#endif