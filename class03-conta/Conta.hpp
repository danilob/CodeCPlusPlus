#ifndef CONTA_H
#define CONTA_H

#include <string>
using namespace std;

struct Conta
{
    string nome;
    int saldo;
    int id;

    Conta(string dono, int saldo_inicial = 0);
    void depositar(int valor);
    void retirar(int valor);
    void imprimirSaldo();
    void transferencia(Conta *destino, int valor);
};

#endif