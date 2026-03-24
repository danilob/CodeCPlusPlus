#include "Circunferencia.hpp"

int main() {
    Ponto *p1 = new Ponto(0, 0);
    Circunferencia *c1 = new Circunferencia(p1, 10.0);
    cout << c1->calcularArea() << endl;

    delete c1;

    p1->imprimir();

    return 0;
}