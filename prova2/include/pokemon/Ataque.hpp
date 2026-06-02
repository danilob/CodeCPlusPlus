#ifndef ATAQUE_HPP
#define ATAQUE_HPP

#include <string>
#include <iostream>

using namespace std;

class Ataque {
public:
    string nome;
    int dano;
    string tipo;
    int nivelMin;

public:
    // Construtor padrão
    Ataque(string nome, int dano, string tipo, int nivelMin);

    void imprimirInformacoes() const;

    
};

#endif