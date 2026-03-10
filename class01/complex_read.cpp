#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string line;
    // Leitura de uma linha inteira de entrada
    while (getline(cin, line)) {
        // Parsing da linha inteira usando string stream
        istringstream row(line);
        // Leitura de **cada** variavel na linha
        string s;
        row >> s;
        int i;
        row >> i;
        cout << "[" << s << "|" << i << "]" << endl;
    }
    return 0;
}