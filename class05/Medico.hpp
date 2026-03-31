#ifndef MEDICO_HPP
#define MEDICO_HPP

#include <string>
#include <iostream>
#include "ProfissionalSaude.hpp"

using namespace std;

class Medico : public ProfissionalSaude {
    private:
        string _especialidade;
        
    public:
        // Construtor padrão
        Medico(string nome, int idade, string registro, string especialidade);

        void diagnosticar();
        
        void exibirInfo() const override;

};

#endif