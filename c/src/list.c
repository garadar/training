#include "list.h"
#include <stdlib.h>
#include <stdio.h>
struct List *create_list(int d){
/* FIXME */
}


void print_list(struct List *list){
/* FIXME */
}


void add_list(struct List *list, int n){
/* FIXME */
}

int search_elt(struct List * list, int n){
/* FIXME */
}


int main(int argc, char *argv[]){
argc=argc;
argv=argv;
struct List *test = create_list(1);
print_list(test);
add_list(test,2);
add_list(test,6);
add_list(test,3);
add_list(test,9);
test=test;

return 0;
}
