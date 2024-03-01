
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