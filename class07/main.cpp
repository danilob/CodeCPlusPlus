#include <string>
#include <iostream>

#include "CityCar.hpp"

using namespace std;

char menu(void);
void getPassCar(string&, int&);
void getTruck(int&, float&);

int main()
{
    CityCar carExpress;
    string marca;
    int passageiros, eixos; 
    float capacidadeCarga;
    
    carExpress.insert("Fiesta", 5);
    carExpress.insert(1,0.5);
    char choice;
    do
    { 
        choice = menu();
        switch( choice )
        {
            case 'Q':
            case 'q': cout << "Bye Bye!" << endl;
            break;
            case 'P':
            case 'p': getPassCar(marca, passageiros);
                      carExpress.insert(marca, passageiros);
            break;
            case 'T':
            case 't': getTruck(eixos, capacidadeCarga);
                      carExpress.insert(eixos, capacidadeCarga);
            break;
            case 'D':
            case 'd': carExpress.display();
            break;
            default: cout << "\a"; // Beep
            break;
        }
    } while( choice != 'Q' && choice != 'q');
    return 0;
}

char menu() // Input a command.
{
    cout << "\n * * * Gestão de Aluguel de Carros * * *\n\n";
    char c;
    cout << "\n P = Adicionar carro de passeio "
    << "\n T = Adicionar caminhão "
    << "\n D = Exibir todos os carros "
    << "\n Q = Sair do programa "
    << "\n\nSua opção: ";
    cin >> c;
    return c;
}

void getPassCar(string& tp, int& n)
{
    char c;
    cin.sync(); cin.clear();
    cout << "\nAdicionar carro de passeio:" << endl;
    cout << "Marca do carro: "; 
    cin >> tp;
    cout << "Capacidade de passageiros: "; 
    cin >> n;
    cin.sync(); 
    cin.clear();
}

void getTruck(int& a, float& t)
{
    cout << "\nAdicionar caminhão:" << endl;
    cout << "Número de eixos: "; cin >> a;
    cout << "Capacidade de carga em toneladas: "; cin >> t;
    cin.sync();
    cin.clear();
}