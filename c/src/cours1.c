#include "cours1.h"
#include <stdio.h>



void print_arg(int nb_arg, char *argv[]){


  for (int i = 0; i < nb_arg - 1; i++)
  {
    printf("argument %d : %s \n", i+1, argv[i+1]);
  } 


}



int main(int argc, char *argv[])
{

//printf("argc = %d\n",argc);
print_arg(argc,argv);

return 0;
}
