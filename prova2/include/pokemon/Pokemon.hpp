#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>
#include <iostream>
#include "Ataque.hpp"

using namespace std;

const string FOGO = "Pokemon do tipo Fogo";
const string AGUA = "Pokemon do tipo Água";
const string ELETRICO = "Pokemon do tipo Elétrico";

class Pokemon {
protected:
    string nome;
    string tipo;
    int nivel;
    int hp;
    std::vector<Ataque> ataques;
    
public:
    // Construtor padrão
    Pokemon(string nome, string tipo, int nivel, int hp);
    ~Pokemon(){};

    //gets e sets
    void setNome(string nome) { this->nome = nome; }
    string getNome() const { return nome; } 

    void setTipo(string tipo) { this->tipo = tipo; }
    string getTipo() const { return tipo; }

    void setNivel(int nivel) { this->nivel = nivel; }
    int getNivel() const { return nivel; }

    void setHp(int hp) { this->hp = hp; }
    int getHp() const { return hp; }



    bool aprenderAtaque(Ataque atq);
    void listarAtaques();
    void receberDano(int quantidade);
    bool estaVivo();
    virtual void atacar(Pokemon* alvo) const = 0;

    
};

#endif