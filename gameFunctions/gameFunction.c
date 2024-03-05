
#include "gameFunction.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define DIM 5

void generaCodice(int v[]) {
    int i;
    srand(time(NULL));
    for (i = 0; i < DIM; i++) {
        v[i] = rand() % 4 + 1;
    }
}

int validita(int n) {
    int i;

    for (i = 1; i < 5; i++) {
        if (n == i) {
            return 0; //valido
        }
    }
    return 1; //non valido
}

void controllo(int pc[], int player[]){

    int g=0;
    int s=0;
    int x=0;
    int cont=0;

    int i;
    int k;

    /*
     g : posizione giusta
     s : posizione scorretta ma numero giusto
     x : non esiste
      */

    for(i=0;i<DIM;i++){
        if(pc[i]==player[i]){
            g++;
        }
    }
    printf("g: %d\n", g);

    for(i=0;i<DIM;i++){
        for(k=0;k<DIM;k++){
            if(player[i]==pc[k]){
              cont++;
            }
        }
        if(cont<1){
            x++;
        }
        cont=0;
    }

    s=DIM-x-g;

    printf("s: %d\n", s);

    printf("x: %d\n", x);
}