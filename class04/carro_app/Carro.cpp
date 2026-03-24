#include "Carro.hpp"

// Inicialização do atributo estático
int Carro::totalCarros = 0;

// Construtor padrão
Carro::Carro() {
    marca = "Desconhecida";
    ano = 0;
    velocidade = 0.0;
    totalCarros++;
}

// Construtor parametrizado
// Carro::Carro(string marca, int ano) {
//     this->marca = marca;
//     this->ano = ano;
//     velocidade = 0.0;
//     totalCarros++;
// }

Carro::Carro(string marca, int ano) : marca(marca), ano(ano) {
    velocidade = 0.0;
    totalCarros++;
}

// Destrutor
Carro::~Carro() {
    totalCarros--;
}

// Método acelerar
void Carro::acelerar(double incremento) {
    velocidade += incremento;
}

// Método frear
void Carro::frear(double decremento) {
    velocidade -= decremento;
    if (velocidade < 0) {
        velocidade = 0;
    }
}

// Método exibir informações
void Carro::exibirInfo() const {
    cout << "Marca: " << marca << endl;
    cout << "Ano: " << ano << endl;
    cout << "Velocidade: " << velocidade << " km/h" << endl;
}

// Método estático
int Carro::getTotalCarros() { 
    return totalCarros;
}