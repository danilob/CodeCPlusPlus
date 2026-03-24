#include <iostream>
#include "Carro.hpp"

int main() {
    Carro c1; // construtor padrão
    Carro c2("Toyota", 2022); // construtor parametrizado

    c2.acelerar(50);
    c2.exibirInfo();

    std::cout << "\nTotal de carros: " 
              << Carro::getTotalCarros() << std::endl;

    return 0;
}