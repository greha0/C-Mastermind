
#include "gameFunction.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "../color.h"

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

int controllo(int pc[], int player[]){

    int g=0;
    int s;
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

    s=DIM-g-x;

    for(i=0;i<g;i++){
        CORRECT;

        printf("V");

        DEFAULT;
    }

    for(i=0;i<s;i++){

        RED;

        printf("X");

        DEFAULT;
    }

    for(i=0;i<x;i++){

        printf("o");

    }

    printf("\n");

    return g;
}