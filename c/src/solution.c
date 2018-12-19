#include "cours1.h"
#include <stdio.h>
#include <stdlib.h>
void print_int(int n){

  printf("int n = %d\n", n);

}

void print_char(char c){

  printf("char = %c\n", c);

}

void print_string(char *s){

  printf("string = %s\n", s);
}

int sum(int a, int b){

  return a + b;
}

int power(int a, int b){

  return a^b;
}

int main(int argc, char *argv[]){
argc=argc;
argv=argv;

int a = atoi(argv[1]);


print_int(a);
print_char(*argv[1]);
print_string("test");
sum(3,4);
power(3,4);
  return 0;
}


