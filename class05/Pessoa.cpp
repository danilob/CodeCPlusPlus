#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, int idade) : _nome(nome), _idade(idade) {}

string Pessoa::getNome() {
    return _nome;
}

int Pessoa::getIdade() {
    return _idade;
}

void Pessoa::setNome(string nome) {
    _nome = nome;
}

void Pessoa::setIdade(int idade) {
    _idade = idade;
}

void Pessoa::exibirInfo() const {
    cout << "Nome: " << _nome << ", Idade: " << _idade << endl;
}