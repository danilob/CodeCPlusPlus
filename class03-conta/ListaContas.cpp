#include "ListaContas.hpp"
#include <iostream>

// Adiciona conta
void ListaContas::adicionar(Conta *conta) {
    contas.push_back(conta);
}

// Lista todas
void ListaContas::listar(){
    for (const auto& c : contas) {
        std::cout << " Nome: " << c->nome
                  << " | Saldo: " << c->saldo
                  << std::endl;
    }
}

