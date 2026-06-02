#include <iostream>
#include <exception>

using namespace std;

class InvalidBalanceException : public exception {

public:

    const char* what() const noexcept override {
        return "Saldo insuficiente!";
    }

};

int main() {

    try {

        throw InvalidBalanceException();

    } catch (const exception& e) {

        cout << e.what() << endl;

    }

    return 0;
}