#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s; // Faz **uma** leitura apenas
    cout << "[" << s << "]" << endl;
    int i;
    // Faz leituras enquanto as variaveis de
    // entrada respeitam o tipo especificado (int).
    while(cin >> i) {
        cout << "[" << i << "]" << endl;
    }
    return 0;
}