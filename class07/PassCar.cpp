#include "PassCar.hpp"

PassCar::PassCar(string marca, int ocupantes) {
    this->marca = marca;
    this->ocupantes = ocupantes;
}

void PassCar::display() const {
    cout << "Carro de Passeio - Marca: " << marca << ", Passageiros: " << ocupantes << endl;
}