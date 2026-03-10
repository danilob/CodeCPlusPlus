#include <iostream>

using namespace std;

double calculaMedia(double numeros[], int tamanho) {
    double soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += numeros[i];
    }
    return soma / tamanho;
}

double calculaDesvioPadrao(double numeros[], int tamanho) {
    double soma = 0;
    double media = calculaMedia(numeros, tamanho);
    for (int i = 0; i < tamanho; i++){
        soma += pow((numeros[i] - media), 2); //(numeros[i] - media)*(numeros[i] - media)
    }
    return sqrt(soma / tamanho);
}


int main() {
    double numeros[5] = {0,12,100,13,12.5};

    cout << "Média: " << calculaMedia(numeros, 5) << endl;
    cout << "Desvio Padrão: " << calculaDesvioPadrao(numeros, 5) << endl;
    
    return 0;
}