/*list.h*/
#ifndef  LIST_H
#define  LIST_H


/*
La structure:
En C (et d'autre langage), on a la possibilité de créer ses propres types en fonction de ses besoins.
Ci-dessous la structure list est définit par un entier 'data' et un pointeur de list 'next'.
Un pointeur c'est comme une flèche qui pointe vers une case mémoire du system.
Il est possible de récupérer une valeur contenue dans la case mémoire ainsi que l'adresse de la case mémoire.

Avec un schéma on comprend mieux:
la sructure List est donc comme un élément a part entière qui contient des sous éléments

struct List *list:

 list -----
 --> |data |---4
 aux |-----|
     |next |-->  -----
      -----     |data |--> 2
                |-----
                |next |--> NULL
                 -----
Comme tu le vois notre type list est en faite une succesion de list (#listception) dont la derniere a sont next qui pointe sur null pour indiquer la fin (NULL = vide pour les pointeurs)
La première fleche désigne le pointeur du premier élément de la list, qu'on appelle HEAD. Un conseil pour débutant: Ne sutout pas perdre la tête!!!

Le symbole * désigne un pointeur
Le symbole & désigne l'adresse du pointeur

(pour creer une structure tu auras besoin de malloc (en bas))
struct List *list désigne un pointeur de notre structure 'List' appelé list (Le compilateur distingue les majuscules/minuscules (case_sensitve))
list->data permet d'accéder au champ data
list->next permet d'accéder au champ next

attention au type!!! ne mélange pas les serviettes et les torchons

Vu que les pointeurs touchent à la memoire on va devoir utiliser malloc( paix à ton âme).
malloc permet d'allouer de la memoire (Memory ALLOCation)
et s'emploie comme ça:


struct List *list = malloc(sizeof(list));
struct List *aux = list;
//parcours ta list aux jusqu'a NULL
while(aux != NULL){
  aux = aux->next;
]



struct <struct_name> *<name> = malloc(sizeof(<name>)):
struct voiture *nissan = malloc(sizeof(nissan));

traduction:
je créér un poineur de structure voiture appelé nissan. j'alloue donc la taille (sizeof()) de la structure voiture.
Cette fonction te créer une case mémoire de la taille de ta structure  ou tu pourras tranquilement définir tes variables.
malloc est une foncion déjà intégrée dans C: man malloc 
                                             man printf
On voit ça ensemble de toute manière, ca te permettra de mieux suivre.

*/

struct List{
  int data;
  struct List *next;
};


/* Cette fonction initialise une structure List avec data=1 et next = NULL, elle renverra la liste en question*/
struct List *create_list(int d);

/* Cette fonction print les entiers de la liste comme suit: 1 -> 2 -> ... -> NULL */
void print_list(struct List *list);

/* Cette fonction insère en fin de la list 'list' l'entier n */
void add_list(struct List *list, int n);

/* Cette fonction renvoie 0 si l'élément n est présent dans la liste sinon 1, et affiche un commentaire selon le resultat */
int search_elt(struct List *list, int n);

struct List *erase_elt(struct List *list, int n);

struct List *sort_list(struct List *list);




#endif /* !LIST_H */
