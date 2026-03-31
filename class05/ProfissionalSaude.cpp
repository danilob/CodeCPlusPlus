#include "ProfissionalSaude.hpp"


ProfissionalSaude::ProfissionalSaude(string nome, int idade, string registro) : Pessoa(nome, idade), _registro(registro) {}

void ProfissionalSaude::exibirInfo() const {
    Pessoa::exibirInfo();
    cout << "Registro: " << _registro << endl;
}