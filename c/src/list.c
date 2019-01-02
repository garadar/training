#include "list.h"
#include <stdlib.h>
#include <stdio.h>
struct List *create_list(int d){
	
struct List *l = malloc(sizeof(l));
   l->data=d; 
   l->next=NULL;

   return 0;
}



void print_list(struct List *l){

   if (l == NULL)
   
   return NULL;

   while (l != NULL)
   {
	   printf("%s -> ", l);
   }
   printf("NULL\n");
   

}


//void add_list(struct List *l, int n){
/* FIXME */
//}

//int search_elt(struct List * l, int n){
/* FIXME */
//}


int main(int argc, char *argv[]){
argc=argc;
argv=argv;
struct List *test = create_list(1);
print_list(test);
//add_list(test,2);
//add_list(test,6);
//add_list(test,3);
//add_list(test,9);
test=test;

return 0;
}
