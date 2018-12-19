#include "list.h"
#include <stdlib.h>

struct List *create_list(int d){
  struct List *list = malloc(sizeof(*list));
  list->data = d;
  list->next = NULL;
  return list;
}




int main(int argc, char *argv[]){
argc=argc;
argv=argv;
struct list *test = create_list(1);

test=test;

return 0;
}
