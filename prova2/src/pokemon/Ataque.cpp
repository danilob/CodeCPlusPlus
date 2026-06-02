#include "Ataque.hpp"

Ataque::Ataque(string nome, int dano, string tipo, int nivelMin) {
    this->nome = nome;
    this->dano = dano;
    this->tipo = tipo;
    this->nivelMin = nivelMin;
}

void Ataque::imprimirInformacoes() const {
    cout << "Nome: " << nome << endl;
    cout << "Dano: " << dano << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Nível Mínimo: " << nivelMin << endl;
}