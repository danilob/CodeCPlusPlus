
CC=g++

CFLAGS=-std=c++11 -Wall

TARGET=program

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Pokemon.o ${BUILD_DIR}/PokemonAgua.o ${BUILD_DIR}/PokemonFogo.o ${BUILD_DIR}/PokemonEletrico.o ${BUILD_DIR}/Ataque.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Pokemon.o: ${INCLUDE_DIR}/pokemon/Pokemon.hpp ${SRC_DIR}/pokemon/Pokemon.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/pokemon/ -c ${SRC_DIR}/pokemon/Pokemon.cpp -o ${BUILD_DIR}/Pokemon.o

${BUILD_DIR}/PokemonAgua.o: ${INCLUDE_DIR}/pokemon/Pokemon.hpp ${INCLUDE_DIR}/pokemon/PokemonAgua.hpp ${SRC_DIR}/pokemon/PokemonAgua.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/pokemon/ -c ${SRC_DIR}/pokemon/PokemonAgua.cpp -o ${BUILD_DIR}/PokemonAgua.o

${BUILD_DIR}/PokemonFogo.o: ${INCLUDE_DIR}/pokemon/Pokemon.hpp ${INCLUDE_DIR}/pokemon/PokemonFogo.hpp ${SRC_DIR}/pokemon/PokemonFogo.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/pokemon/ -c ${SRC_DIR}/pokemon/PokemonFogo.cpp -o ${BUILD_DIR}/PokemonFogo.o	

${BUILD_DIR}/PokemonEletrico.o: ${INCLUDE_DIR}/pokemon/Pokemon.hpp ${INCLUDE_DIR}/pokemon/PokemonEletrico.hpp ${SRC_DIR}/pokemon/PokemonEletrico.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/pokemon/ -c ${SRC_DIR}/pokemon/PokemonEletrico.cpp -o ${BUILD_DIR}/PokemonEletrico.o

${BUILD_DIR}/Ataque.o: ${INCLUDE_DIR}/pokemon/Ataque.hpp ${SRC_DIR}/pokemon/Ataque.cpp ${INCLUDE_DIR}/pokemon/Pokemon.hpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/pokemon/ -c ${SRC_DIR}/pokemon/Ataque.cpp -o ${BUILD_DIR}/Ataque.o


${BUILD_DIR}/main.o: ${INCLUDE_DIR}/pokemon/PokemonEletrico.hpp ${INCLUDE_DIR}/pokemon/PokemonAgua.hpp ${INCLUDE_DIR}/pokemon/PokemonFogo.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/pokemon/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o


# Rule for cleaning files generated during compilation.
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/* 
	rm -f ${TARGET}