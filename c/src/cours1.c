#include "cours1.h"
#include <stdio.h>

void print_arg(int nb_arg, char *argv[]){


  for (int i = 0; i < nb_arg ; i++)
  {
    printf("argument %d : %s \n", i, argv[i]);
  }

}

void print_int(char *n){

  printf("entier = %s \n", n);

}














int main(int argc, char *argv[])
{

print_arg(argc,argv);
print_int("6");
int a = 0;
a = 1;

return a;
}




