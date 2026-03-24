#ifndef CARRO_HPP
#define CARRO_HPP

#include <string>
#include <iostream>

using namespace std;

class Carro {
private:
    string marca;
    int ano;
    double velocidade;

    static int totalCarros; // atributo estático

public:
    // Construtor padrão
    Carro();

    // Construtor parametrizado
    Carro(string marca, int ano);

    // Destrutor
    ~Carro();

    // Métodos
    void acelerar(double incremento);
    void frear(double decremento);
    void exibirInfo() const;

    // Método estático
    static int getTotalCarros();
};

#endif