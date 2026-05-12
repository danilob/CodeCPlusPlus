
CC=g++

CFLAGS=-std=c++11 -Wall

TARGET=program

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/AbstractCar.o ${BUILD_DIR}/PassCar.o ${BUILD_DIR}/Truck.o  ${BUILD_DIR}/CityCar.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/AbstractCar.o: ${INCLUDE_DIR}/car/AbstractCar.hpp ${SRC_DIR}/car/AbstractCar.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/car/ -c ${SRC_DIR}/car/AbstractCar.cpp -o ${BUILD_DIR}/AbstractCar.o

${BUILD_DIR}/PassCar.o: ${INCLUDE_DIR}/car/PassCar.hpp ${SRC_DIR}/car/PassCar.cpp ${INCLUDE_DIR}/car/AbstractCar.hpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/car/ -c ${SRC_DIR}/car/PassCar.cpp -o ${BUILD_DIR}/PassCar.o

${BUILD_DIR}/Truck.o: ${INCLUDE_DIR}/car/Truck.hpp ${SRC_DIR}/car/Truck.cpp ${INCLUDE_DIR}/car/AbstractCar.hpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/car/ -c ${SRC_DIR}/car/Truck.cpp -o ${BUILD_DIR}/Truck.o

${BUILD_DIR}/CityCar.o: ${INCLUDE_DIR}/car/CityCar.hpp ${SRC_DIR}/car/CityCar.cpp ${INCLUDE_DIR}/car/AbstractCar.hpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/car/ -c ${SRC_DIR}/car/CityCar.cpp -o ${BUILD_DIR}/CityCar.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/car/AbstractCar.hpp ${INCLUDE_DIR}/car/PassCar.hpp ${INCLUDE_DIR}/car/Truck.hpp ${INCLUDE_DIR}/car/CityCar.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/car/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation.
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/* 
	rm -f ${TARGET}