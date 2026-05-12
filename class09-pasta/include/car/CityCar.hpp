#ifndef CITYCAR_HPP
#define CITYCAR_HPP

#include <string>
#include <iostream>

using namespace std;
#include "AbstractCar.hpp"

namespace Car{
    class CityCar {
    private:
        AbstractCar* frota[100];
        int qtde;        
    public:
        // Construtor padrão
        CityCar();
        ~CityCar();

        void insert(string marca, int ocupantes);
        void insert(int eixos, float capacidadeCarga);

        void display() const;

        
    };
}
#endif