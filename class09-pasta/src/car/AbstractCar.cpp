#include "AbstractCar.hpp"

Car::AbstractCar::AbstractCar() {
    // Construtor padrão
}

Car::AbstractCar::~AbstractCar() {
    // Destrutor
}

void Car::AbstractCar::display() const {
    cout << "Car - Base class" << endl;
}