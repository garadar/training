#include "cours1.h"
#include <stdio.h>
#include <stdlib.h>



void print_arg(int nb_arg, char *argv[]){


  for (int i = 0; i < nb_arg - 1; i++)
  {
    printf("argument %d : %s \n", i+1, argv[i+1]);
  } 


}


void print_int(int n){

  printf("entier = %d\n", n);
}
	

int sum(int a, int b){

  return a + b;
}


int power(int a, int b){
if(b == 0)
  return 0;

int res = a;
  for(int i = 1; i < b; i++){

    res = res * a;

  }

  return res;	
}


void print_char(char c){

  printf("c = %c\n", c);
}


void print_string(char *s){

  printf("string = %s\n", s);
}
 

int main(int argc, char *argv[]){


int x = atoi(argv[1]);
char y = 'c';
char * s = argv[1];
//printf("argc = %d\n",argc);
print_arg(argc,argv);
print_int(x);

int res = sum(x,atoi(argv[2]));
res = power(x,atoi(argv[2])); //(j'ai mis  en attendant une solution)

print_int(res);
print_char(y);
print_string(s);

return 0;
}
