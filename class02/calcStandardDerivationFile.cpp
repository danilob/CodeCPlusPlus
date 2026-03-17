#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct vectorData {
    double *numbers;
    int size;
};

void readVectorFromFile(string fileName, vectorData &data) {
    ifstream in(fileName, fstream::in);
    if (!in.is_open()) {
        return;
    }

    in >> data.size;
    data.numbers = new double[data.size];
    for (int i = 0; i < data.size; i++) {
        in >> data.numbers[i];
    }

}

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
    vectorData data;
    readVectorFromFile("input.txt", data);
    // for (int i = 0; i < data.size; i++) {
    //     cout << data.numbers[i] << " ";
    // }
    // cout << endl;

    // double numeros[5] = {0,12,100,13,12.5};

    cout << "Média: " << calculaMedia(data.numbers, data.size) << endl;
    cout << "Desvio Padrão: " << calculaDesvioPadrao(data.numbers, data.size) << endl;
    
    return 0;
}