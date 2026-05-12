#include "CityCar.hpp"
#include "PassCar.hpp"
#include "Truck.hpp"

Car::CityCar::CityCar() {
    qtde = 0;
}

Car::CityCar::~CityCar() {
    for (int i = 0; i < qtde; i++) {
        delete frota[i];
    }
}

void Car::CityCar::insert(string marca, int ocupantes) {
    if (qtde < 100) {
        frota[qtde++] = new PassCar(marca, ocupantes);
    } else {
        cout << "Está cheio!" << endl;
    }
}
void Car::CityCar::insert(int eixos, float capacidadeCarga) {
    if (qtde < 100) {
        frota[qtde++] = new Truck(eixos, capacidadeCarga);
    } else {
        cout << "Está cheio!" << endl;
    }
}

void Car::CityCar::display() const {
    cout << "\nQuantidade de Carros (" << qtde << "):\n";
    for (int i = 0; i < qtde; i++) {
        if(typeid(*frota[i]) == typeid(PassCar)) {
            cout << "Carro de Passeio: ";
        } else if(typeid(*frota[i]) == typeid(Truck)) {
            cout << "Caminhão: ";
        }
        frota[i]->display();
        cout << "-------------------" << endl;
    }
}