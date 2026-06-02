#ifndef POKEMONELETRICO_HPP
#define POKEMONELETRICO_HPP

#include "Pokemon.hpp"

class PokemonEletrico : public Pokemon {
public:
    PokemonEletrico(string nome, int nivel, int hp);
    ~PokemonEletrico(){};
    virtual void atacar(Pokemon* alvo) const override;
};

#endif