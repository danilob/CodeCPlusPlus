#include "Pokemon.hpp"

Pokemon::Pokemon(string nome, string tipo, int nivel, int hp) {
    this->nome = nome;
    this->tipo = tipo;
    this->nivel = nivel;
    this->hp = hp;
}

bool Pokemon::aprenderAtaque(Ataque atq) {
    if (nivel >= atq.nivelMin && atq.tipo == tipo) {
        ataques.push_back(atq);
        return true;
    }
    return false;
}

void Pokemon::listarAtaques() {
    cout << "Ataques de " << nome << ":" << endl;
    for (const auto& atq : ataques) {
        atq.imprimirInformacoes();
        cout << "-------------------" << endl;
    }
}

void Pokemon::receberDano(int quantidade) {
    hp -= quantidade;
    if (hp < 0) {
        hp = 0;
    }
}

bool Pokemon::estaVivo() {
    return hp > 0;
}

