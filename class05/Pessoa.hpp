#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>
#include <iostream>

using namespace std;

class Pessoa {
    protected:
        string _nome;
        int _idade;

    public:
        // Construtor padrão
        Pessoa(string nome, int idade);
    
        // Métodos de acesso
        string getNome();
        int getIdade();
        void setNome(string nome);
        void setIdade(int idade);
        
        // Método para exibir informações
        virtual void exibirInfo() const;

};

#endif