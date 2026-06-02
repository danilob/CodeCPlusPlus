#ifndef POKEMONAGUA_HPP
#define POKEMONAGUA_HPP

#include "Pokemon.hpp"

class PokemonAgua : public Pokemon {
public:
    PokemonAgua(string nome, int nivel, int hp);
    ~PokemonAgua(){};
    virtual void atacar(Pokemon* alvo) const override;
};

#endif