#ifndef CITYCAR_HPP
#define CITYCAR_HPP

#include <string>
#include <iostream>

using namespace std;
#include "Car.hpp"


class CityCar {
private:
    Car* frota[100];
    int qtde;        
public:
    // Construtor padrão
    CityCar();
    ~CityCar();

    void insert(string marca, int ocupantes);
    void insert(int eixos, float capacidadeCarga);

    void display() const;

    
};

#endif