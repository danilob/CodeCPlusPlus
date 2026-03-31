#ifndef PROFISSIONAL_SAUDE_HPP
#define PROFISSIONAL_SAUDE_HPP

#include <string>
#include <iostream>
#include "Pessoa.hpp"

using namespace std;

class ProfissionalSaude : public Pessoa
{
    protected:
        string _registro;

    public:
        // Construtor padrão
        ProfissionalSaude(string nome, int idade, string registro);

        // Método para exibir informações
        void exibirInfo() const override;
};

#endif