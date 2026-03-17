#ifndef CONTAS_H
#define CONTAS_H
#include "Conta.hpp"

#include <string>
using namespace std;

#include <vector>

struct ListaContas {
    vector<Conta*> contas;

    void adicionar(Conta *conta);
    void listar();
};

#endif