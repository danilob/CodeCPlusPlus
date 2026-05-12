#ifndef TRUCK_HPP
#define TRUCK_HPP

#include <string>
#include <iostream>
#include "Car.hpp"

using namespace std;

class Truck: public Car {
private:
    int eixos;
    float capacidadeCarga;
public:
    // Construtor padrão
    Truck(int eixos, float capacidadeCarga);

    virtual void display() const override;

    
};

#endif