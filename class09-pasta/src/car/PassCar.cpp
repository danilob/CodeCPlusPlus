#include "PassCar.hpp"

Car::PassCar::PassCar(string marca, int ocupantes) {
    this->marca = marca;
    this->ocupantes = ocupantes;
}

void Car::PassCar::display() const {
    cout << "Marca: " << marca << ", Passageiros: " << ocupantes << endl;
}