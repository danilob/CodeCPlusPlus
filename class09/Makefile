# Makefile para class09

CXX = g++
CXXFLAGS = -Wall -std=c++17

all: main

main: main.o Car.o CityCar.o Truck.o PassCar.o
	$(CXX) $(CXXFLAGS) main.o Car.o CityCar.o Truck.o PassCar.o -o main

Car.o: Car.cpp Car.hpp
	$(CXX) $(CXXFLAGS) -c Car.cpp -o Car.o

CityCar.o: CityCar.cpp CityCar.hpp Car.hpp
	$(CXX) $(CXXFLAGS) -c CityCar.cpp -o CityCar.o

Truck.o: Truck.cpp Truck.hpp Car.hpp
	$(CXX) $(CXXFLAGS) -c Truck.cpp -o Truck.o

PassCar.o: PassCar.cpp PassCar.hpp Car.hpp
	$(CXX) $(CXXFLAGS) -c PassCar.cpp -o PassCar.o

main.o: main.cpp CityCar.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o


clean:
	rm -f main *.o 