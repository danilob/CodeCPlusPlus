#include "Enfermeiro.hpp"

Enfermeiro::Enfermeiro(string nome, int idade, string registro, string turno) : ProfissionalSaude(nome, idade, registro), _turno(turno) {}

void Enfermeiro::assistirPaciente() {
    cout << "Assistindo paciente..." << endl;
}

void Enfermeiro::exibirInfo() const {
    ProfissionalSaude::exibirInfo();
    cout << "Turno: " << _turno << endl;
}

