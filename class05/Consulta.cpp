#include "Consulta.hpp"

Consulta::Consulta(Medico medico, Pessoa paciente, string descricao) : _medico(medico), _paciente(paciente), _descricao(descricao) {}

void Consulta::exibirConsulta(){
    cout << "Consulta realizada por: " << _medico.getNome() << endl;
    cout << "Paciente: " << _paciente.getNome() << endl;
    cout << "Anamnese: " << _descricao << endl;
}