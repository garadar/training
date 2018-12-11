#Makefile cours1
CC=colorgcc
CFLAGS= -Werror -Wall -Wextra -pedantic -std=c99 -g3
SRC= ./src/cours1.c
OBJ= $(SRC:.c=.o)


all: main

#link .o with lib.so
main: ./src/main.o libcours1.so
	 -g3 -o bin -L. ./src/main.o -lcours1

libcours1.so: CFLAGS += -fPIC

libmcours1.so: 
	  -shared -o libcours1.so  


debug: CFLAGS += -g3
debug: ./src/main.o
	  ./src/main.o -o debug

check:
	./tests/check.sh
clean:
	 ./src/*.o *.swp bin libcours1.so

