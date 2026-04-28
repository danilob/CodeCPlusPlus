#ifndef PASSCAR_HPP
#define PASSCAR_HPP

#include <string>
#include <iostream>
#include "Car.hpp"

using namespace std;

class PassCar: public Car {
private:
    string marca;
    int ocupantes;
public:
    // Construtor padrão
    PassCar(string marca, int ocupantes);

    virtual void display() const override;

    
};

#endif