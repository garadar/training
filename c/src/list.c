#include "list.h"
#include <stdlib.h>
#include <stdio.h>
struct List *create_list(int d){
	
struct List *l = malloc(sizeof(l));
   l->data=d; 
   l->next=NULL;

   return l;
}



void print_list(struct List *l){

   if (l == NULL)
   {
   return;
   }


   while (l != NULL)
   {
	   printf("%d -> ", l->data );
	   l = l->next;
   }
   printf("NULL\n");

}


void add_list(struct List *l, int n){


struct List *test = malloc(sizeof(test)); #pas le droit au malloc, utilise ce que tu as déjà fais
 
  if (l == NULL || test == NULL)#ici c est pas bon
  {
  return;
  }
  test->data=n;
  test->next=l;

}

//int search_elt(struct List * l, int n){
/* FIXME */
//}


int main(int argc, char *argv[]){
argc=argc;
argv=argv;
struct List *l = create_list(8);
add_list(l,2);
add_list(l,6);
add_list(l,3);
add_list(l,9);
print_list(l);


return 0;
}
