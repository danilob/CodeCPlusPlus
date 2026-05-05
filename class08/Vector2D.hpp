#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

#include <string>
#include <iostream>

using namespace std;

class Vector2D {
    private:
        double x, y;

    public:
        // Construtor padrão
        Vector2D();
        Vector2D(double x, double y);

        //operadores aritméticos
        Vector2D operator+(const Vector2D& other) const; //função membro
        Vector2D operator*(double scalar) const; //função membro
        friend Vector2D operator*(double scalar, const Vector2D& v); //função amiga


        //operador boleano
        // bool operator==(const Vector2D& other) const;
        friend bool operator==(const Vector2D& a, const Vector2D& b);

        //operadores não usuais
        friend ostream& operator<<(ostream& os, const Vector2D& v);

        void print() const;
    
};

#endif