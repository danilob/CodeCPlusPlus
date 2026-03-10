#include <iostream>

using namespace std;

const double TAXA_DE_JUROS_MENSAL = 0.015;
const double VALOR_PARCELA = 50;

void calculaMesesEJuros(double valorDoProduto) {
    int meses = 0;
    double valorTotalJuros = 0;

    while (valorDoProduto > 0) {
        double valorJurosAtual = valorDoProduto * TAXA_DE_JUROS_MENSAL;
        valorDoProduto += valorJurosAtual - VALOR_PARCELA;
        valorTotalJuros += valorJurosAtual; 
        cout << "Mês " << meses + 1 << ": Valor do produto: " << valorDoProduto << ", Juros deste mês: " << valorJurosAtual << endl;    
        meses++;
    }

    cout << "Número de meses para pagar o produto: " << meses << endl;
    cout << "Valor total pago em juros: " << valorTotalJuros << endl;
}



int main(){
    int valorDoProtuto = 1000;
    calculaMesesEJuros(valorDoProtuto);
    return 0;
}