#Makefile cours1
CC=gcc
CFLAGS= -Werror -Wall -Wextra -pedantic -std=c99 -g3
SRC= ./src/solution.c
OBJ= $(SRC:.c=.o)


all: main

#link .o with lib.so
main:   $(SRC)
	$(CC) $(CFLAGS) $(SRC) -g3 -o bin 

libcours1.so: CFLAGS += -fPIC

libmcours1.so: 
	  -shared -o libcours1.so  


debug: CFLAGS += -g3
debug: ./src/main.o
	  ./src/main.o -o debug

check:
	./tests/check.sh
clean:
	 rm -rf ./src/*.o *.swp bin libcours1.so

