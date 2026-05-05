#include <string>
#include <iostream>

#include "Vector2D.hpp"

using namespace std;

int main()
{
    Vector2D a(1,2), b(3,4);
    // a.print();
    // b.print();
    Vector2D c = a + b;
    // c.print();

    cout << "a == b? " << (a == b ? "Sim" : "Não") << endl;

    Vector2D d = 2.0 * a;
    cout << d << endl;

    return 0;
}

