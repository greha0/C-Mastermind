
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
    int k,i;

    for(i=0; i<DIM; i++){
        if(pc[i]==player[i]){
            g++;
        }
    }

    for(i=0;i<DIM;i++){
        for(k=0; k<DIM; k++){
            if((pc[i]==player[k])&&(i != k)){
                s++;
            }
        }
    }

    for(i=0; i<g; i++){
        printf("V");
    }

    for(i=0; i<g; i++){
        printf("X");
    }

    for(i=0; i<(DIM-s-g); i++){
        printf("o");
    }



}