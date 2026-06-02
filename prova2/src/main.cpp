#include "PokemonAgua.hpp"
#include "PokemonFogo.hpp"
#include "PokemonEletrico.hpp"

void batalhaPokemon(Pokemon* p1, Pokemon* p2);

char menu();

int main() {
    srand(time(0));
    Pokemon* squirtle = new PokemonAgua("Squirtle", 5, 50);
    Pokemon* charmander = new PokemonFogo("Charmander", 5, 50);
    Pokemon* pikachu = new PokemonEletrico("Pikachu", 5, 50);

    std::vector<Pokemon*> pokemons = {squirtle, charmander, pikachu};

    Ataque atqFogo1("Brasas", 10, FOGO, 1);
    Ataque atqFogo2("Lança Chamas", 20, FOGO, 5);

    Ataque atqAgua1("Jato d'Água", 12, AGUA, 1);
    Ataque atqAgua2("Hidro Bomba", 22, AGUA, 5);

    Ataque atqEletrico1("Choque do Trovão Elétrico", 15, AGUA, 1);
    Ataque atqEletrico2("Raio Elétrico", 25, AGUA, 5);
    
    squirtle->aprenderAtaque(atqAgua1);
    squirtle->aprenderAtaque(atqAgua2);
    charmander->aprenderAtaque(atqFogo1);
    charmander->aprenderAtaque(atqFogo2);
    pikachu->aprenderAtaque(atqEletrico1);
    pikachu->aprenderAtaque(atqEletrico2);
    
    for (const auto& pokemon : pokemons) {
        cout << "Nome: " << pokemon->getNome() << endl;
        cout << "Tipo: " << pokemon->getTipo() << endl;
        cout << "Nível: " << pokemon->getNivel() << endl;
        cout << "HP: " << pokemon->getHp() << endl;
        cout << "Ataques aprendidos:" << endl;
        pokemon->listarAtaques();
        cout << "-------------------" << endl;
    }

    char choice;
    do
    { 
        choice = menu();
        switch( choice )
        {
            case 'Q':
            case 'q': cout << "Fim!" << endl;
            break;
            case 'P':
            case 'p': cout << "Batalha Pokémon!" << endl;
                      cout << "Escolha os Pokémon para a batalha:" << endl;
                      cout << "1. " << squirtle->getNome() << endl;
                      cout << "2. " << charmander->getNome() << endl;
                      cout << "3. " << pikachu->getNome() << endl;
                      int p1, p2;
                      cout << "Escolha o primeiro Pokémon (1-3): ";
                      cin >> p1;
                      cout << "Escolha o segundo Pokémon (1-3): ";
                      cin >> p2;
                      if (p1 >= 1 && p1 <= 3 && p2 >= 1 && p2 <= 3 && p1 != p2) {
                          batalhaPokemon(pokemons[p1 - 1], pokemons[p2 - 1]);
                      } else {
                          cout << "Escolha inválida!" << endl;
                      }
            break;
            
            default: cout << "\a"; // Beep
            break;
        }
    } while( choice != 'Q' && choice != 'q');


    // Pokemon* p1 = nullptr;
    // Pokemon* p2 = nullptr;
    // do{
    //     p1 = pokemons[rand() % pokemons.size()];
    //     p2 = pokemons[rand() % pokemons.size()];

    // }while(p1 == p2 || p1 == nullptr || p2 == nullptr);


    // batalhaPokemon(p1, p2);

    
    
    return 0;
}

char menu(){
    cout << "\n * * * Batalha Pokémon * * *\n\n";
    char c;
    cout << "\n P = Iniciar batalha "
    << "\n Q = Sair "
    << "\n\nSua opção: ";
    cin >> c;
    return c;
}

void batalhaPokemon(Pokemon* p1, Pokemon* p2) {
    cout << "\nInício da batalha!" << endl;
    cout << p1->getNome() << " (HP: " << p1->getHp() << ") vs " << p2->getNome() << " (HP: " << p2->getHp() << ")" << endl;
    int turno = 1;
    while (p1->estaVivo() && p2->estaVivo()) {
        
        p1->atacar(p2);
        if (!p2->estaVivo()) {
            cout << p2->getNome() << " foi derrotado!" << endl;
            break;
        }
        
        p2->atacar(p1);
        if (!p1->estaVivo()) {
            cout << p1->getNome() << " foi derrotado!" << endl;
            break;
        }
        cout << "Após o turno " << turno << ":" << endl;
        cout << p1->getNome() << " (HP: " << p1->getHp() << ") vs " << p2->getNome() << " (HP: " << p2->getHp() << ")" << endl;
        turno++;

    }
    cout << "Fim da batalha!" << endl;
}


// #include <string>
// #include <iostream>
// #include "AbstractCar.hpp"
// #include "CityCar.hpp"

// using namespace std;

// char menu(void);
// void getPassCar(string&, int&);
// void getTruck(int&, float&);

// int main()
// {
//     Car::CityCar carExpress;
//     string marca;
//     int passageiros, eixos; 
//     float capacidadeCarga;
    
//     carExpress.insert("Fiesta", 5);
//     carExpress.insert(1,0.5);
//     char choice;
//     do
//     { 
//         choice = menu();
//         switch( choice )
//         {
//             case 'Q':
//             case 'q': cout << "Bye Bye!" << endl;
//             break;
//             case 'P':
//             case 'p': getPassCar(marca, passageiros);
//                       carExpress.insert(marca, passageiros);
//             break;
//             case 'T':
//             case 't': getTruck(eixos, capacidadeCarga);
//                       carExpress.insert(eixos, capacidadeCarga);
//             break;
//             case 'D':
//             case 'd': carExpress.display();
//             break;
//             default: cout << "\a"; // Beep
//             break;
//         }
//     } while( choice != 'Q' && choice != 'q');
//     return 0;
// }

// char menu() // Input a command.
// {
//     cout << "\n * * * Gestão de Aluguel de Carros * * *\n\n";
//     char c;
//     cout << "\n P = Adicionar carro de passeio "
//     << "\n T = Adicionar caminhão "
//     << "\n D = Exibir todos os carros "
//     << "\n Q = Sair do programa "
//     << "\n\nSua opção: ";
//     cin >> c;
//     return c;
// }

// void getPassCar(string& tp, int& n)
// {
//     cin.sync(); cin.clear();
//     cout << "\nAdicionar carro de passeio:" << endl;
//     cout << "Marca do carro: "; 
//     cin >> tp;
//     cout << "Capacidade de passageiros: "; 
//     cin >> n;
//     cin.sync(); 
//     cin.clear();
// }

// void getTruck(int& a, float& t)
// {
//     cout << "\nAdicionar caminhão:" << endl;
//     cout << "Número de eixos: "; cin >> a;
//     cout << "Capacidade de carga em toneladas: "; cin >> t;
//     cin.sync();
//     cin.clear();
// }