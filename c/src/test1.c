#include "test1.h"
#include <stdio.h>
#include <stdlib.h>

int doublee(int n){

        return 2 * n;
}


int triple(int nombre){

	return 3 * nombre;
}



int main(int argc, char *argv[]){

    int nombreEntre = 0;
    
    printf("Entre un nombre jeune abricot... ");
    scanf("%d", &nombreEntre);

    printf("Le double de ce nombre est %d\n", doublee(nombreEntre));


    printf("Maintenant je vais le tripler, entre à nouveau un nombre... ");
    scanf("%d", &nombreEntre);

    printf("D'après moi, le triple de ce nombre est %d\n", triple(nombreEntre));
    argc=argc;
    argv=argv;


    return 0;

}








