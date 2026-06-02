#include "PokemonFogo.hpp"

#include <cstdlib>
#include <ctime>



PokemonFogo::PokemonFogo(string nome, int nivel, int hp) : Pokemon(nome, FOGO, nivel, hp) {}

void PokemonFogo::atacar(Pokemon* alvo) const {
    
    if (ataques.empty()) {
        cout << nome << " não tem ataques disponíveis!" << endl;
        return;
    }

    int ataquesDisponiveis = ataques.size();


    Ataque atq = ataques[rand() % ataquesDisponiveis];


    cout << nome << " usou " << atq.nome << " em " << alvo->getNome() << endl;

    // Exemplo de sorteio de faixa percentual (1 a 100):
    int chanceErrou = rand() % 100 + 1;

    if(chanceErrou   <= 15) {
        cout << nome << " errou o ataque!" << endl;
        return;
    }

    int chanceCritico = rand() % 100 + 1;

    
    int danoFinal = atq.dano;
    if (alvo->getTipo() == ELETRICO) {
        danoFinal += (int) danoFinal*(0.15); // Fogo é super efetivo contra Água
    } 

    if (chanceCritico <= 20) {
        cout << "Ataque crítico!" << endl;
        danoFinal += (int) danoFinal*0.12;
    }

    alvo->receberDano(danoFinal);
    cout << nome << " causou " << danoFinal << " de dano em " << alvo->getNome() << "!" << endl;
}