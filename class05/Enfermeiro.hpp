#ifndef CLASS_HPP
#define CLASS_HPP

#include <string>
#include <iostream>
#include "ProfissionalSaude.hpp"

using namespace std;

class Enfermeiro : public ProfissionalSaude {
private:
    string _turno;

public:
    // Construtor padrão
    Enfermeiro(string nome, int idade, string registro, string turno);

    void assistirPaciente();

    void exibirInfo() const override;
    
};

#endif