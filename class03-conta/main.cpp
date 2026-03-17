#include <iostream>
#include "Conta.hpp"
#include "ListaContas.hpp"

using namespace std;

int main() {
    Conta *contaDanilo = new Conta("Danilo", 1000);
    // contaDanilo->imprimirSaldo();
    // contaDanilo->depositar(500);
    // contaDanilo->imprimirSaldo();
    // contaDanilo->retirar(200);
    // contaDanilo->imprimirSaldo();
    // contaDanilo->retirar(2000);

    Conta *contaMaria = new Conta("Maria", 100);

    ListaContas *contas = new ListaContas();

    contas->adicionar(contaDanilo);
    contas->adicionar(contaMaria);

    contas->listar();




    delete contaDanilo;

    return 0;
}