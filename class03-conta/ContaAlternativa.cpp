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
    cout << "O saldo de " << nome << " eh: R$" << saldo << endl;
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


void Conta::transferencia(Conta *destino, int valor)
{
    cout << "Transferindo " << valor << " da conta de " << nome << " para a conta de " << destino->nome << endl;
    if (saldo < valor)
    {
        cout << "Saldo insuficiente para transferir " << valor << " da conta de " << nome << endl;
        return;
    }
    this->retirar(valor);
    destino->depositar(valor);
}