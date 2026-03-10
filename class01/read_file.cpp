#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ifstream in("entrada.txt", fstream::in);
    if (!in.is_open()) {
        return 1;
    }

    ofstream out("saida.txt", fstream::out);
    if (!out.is_open()) {
        return 1;
    }

    string line;
    while (getline(in, line)) {
        cout << line << endl;
        out << line << endl;
    }
    in.close();
    out.close();
    return 0;
}