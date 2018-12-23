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

  printf("n = %d\n", n);
}
	

int sum(int a, int b){

return a + b;
}


int main(int argc, char *argv[]){


int x = atoi(argv[1]);
//printf("argc = %d\n",argc);
print_arg(argc,argv);
print_int(x);
int res = sum(x,atoi(argv[2]));
print_int(res);

return 0;
}
