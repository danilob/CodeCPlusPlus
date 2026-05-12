#ifndef CAR_HPP
#define CAR_HPP

#include <string>
#include <iostream>

using namespace std;

class Car {
    public:
        // Construtor padrão
        Car();
        virtual ~Car();
        virtual void display() const = 0;

    
};

#endif