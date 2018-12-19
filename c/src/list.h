/*list.h*/
#ifndef  LIST_H
#define  LIST_H


struct List{
  int data;
  struct List *next;
};

struct List *create_list(int d);


#endif /* !LIST_H */
