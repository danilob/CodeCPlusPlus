#include "Conta.hpp"
#include <iostream>

using namespace std;

Conta::Conta(string dono, int saldo_inicial)
{
    nome = dono;
    saldo = saldo_inicial;
}

void Conta::imprimirSaldo()
{
    cout << "O saldo da conta de " << nome << " eh: " << saldo << endl;
}

void Conta::depositar(int valor)
{
    cout << "Depositando " << valor << " na conta de " << nome << endl;
    saldo += valor;
    
}

void Conta::retirar(int valor)
{
    cout << "Retirando " << valor << " da conta de " << nome << endl;
    if (saldo < valor)
    {
        cout << "Saldo insuficiente para retirar " << valor << " da conta de " << nome << endl;
        return;
    }
    saldo -= valor;
}
