#include "Truck.hpp"

Truck::Truck(int eixos, float capacidadeCarga) {
    this->eixos = eixos;
    this->capacidadeCarga = capacidadeCarga;
}

void Truck::display() const {
    cout << "Caminhão - Eixos: " << eixos << ", Capacidade de Carga: " << capacidadeCarga  << " tonelada(s)" << endl;
}
