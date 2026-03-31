#ifndef CONSULTA_HPP
#define CONSULTA_HPP

#include <string>
#include <iostream>
#include "Medico.hpp"
#include "Pessoa.hpp"

using namespace std;

class Consulta {
    private:
        Medico _medico;
        Pessoa _paciente;
        string _descricao;
        
    public:
        // Construtor padrão
        Consulta(Medico medico, Pessoa paciente, string descricao);

        void exibirConsulta();
    
};

#endif