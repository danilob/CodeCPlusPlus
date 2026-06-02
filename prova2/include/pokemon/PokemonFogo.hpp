#ifndef POKEMONFOGO_HPP
#define POKEMONFOGO_HPP

#include "Pokemon.hpp"

class PokemonFogo : public Pokemon {
public:
    PokemonFogo(string nome, int nivel, int hp);
    ~PokemonFogo(){};
    virtual void atacar(Pokemon* alvo) const override;
};

#endif