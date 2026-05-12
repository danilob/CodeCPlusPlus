#ifndef ABSTRACTCAR_HPP
#define ABSTRACTCAR_HPP

#include <string>
#include <iostream>

using namespace std;
namespace Car{
    class AbstractCar {
        public:
            // Construtor padrão
            AbstractCar();
            virtual ~AbstractCar();
            virtual void display() const = 0;

        
    };

}

#endif