#ifndef PASSCAR_HPP
#define PASSCAR_HPP

#include <string>
#include <iostream>
#include "AbstractCar.hpp"

using namespace std;

namespace Car{
    class PassCar: public AbstractCar {
    private:
        string marca;
        int ocupantes;
    public:
        // Construtor padrão
        PassCar(string marca, int ocupantes);

        virtual void display() const;

        
    };
}
#endif