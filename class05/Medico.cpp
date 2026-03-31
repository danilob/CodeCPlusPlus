#include "Medico.hpp"

Medico::Medico(string nome, int idade, string registro, string especialidade) : ProfissionalSaude(nome, idade, registro), _especialidade(especialidade) {}

void Medico::diagnosticar() {
    cout << "Realizando diagnóstico..." << endl;
}

void Medico::exibirInfo() const {
    ProfissionalSaude::exibirInfo();
    cout << "Especialidade: " << _especialidade << endl;
}