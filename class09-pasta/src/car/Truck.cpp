#include "Truck.hpp"

Car::Truck::Truck(int eixos, float capacidadeCarga) {
    this->eixos = eixos;
    this->capacidadeCarga = capacidadeCarga;
}

void Car::Truck::display() const {
    cout << "Eixos: " << eixos << ", Capacidade de Carga: " << capacidadeCarga  << " tonelada(s)" << endl;
}
