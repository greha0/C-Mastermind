
#include "gameFunction.h"
#include <time.h>
#include <stdlib.h>

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

void controllo(int pc[], int player[], int posizioni[]){

    int g=0;
    int s=0;
    int x=0;

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
        if((player[i]==1)||(player[i]==2)||(player[i]==3)||(player[i]==4)){
            s++;
        } else {
            x++;
        }
    }
    s=s-g;

    for(i=0;i<DIM;i++){
        for(k=0;k<g;k++){
            posizioni[i]=0;
        }
        for(k=0;k<s;k++){
            posizioni[i]=1;
        }
        for(k=0;k<x;k++){
            posizioni[i]=2;
        }
    }
}