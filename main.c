#include <stdio.h>
#include "gameFunctions/gameFunction.h"

#define DIM 5

int main() {

    int n;
    int pcCode[DIM];
    int playerCode[DIM];
    int validValue = 0;
    int tent = 1;
    int i;

    //inizializzazione del programma
    generaCodice(pcCode);

    /*for(i=0;i<DIM;i++){
        printf("%d", pcCode[i]);
    }*/

    do {
        //richiesta dei dati all'utente

        printf("TENTATIVO %d\n", tent);
        i = 0;
        do {

            do {
                printf("Valore %d: ", i);
                scanf("%d", &n);

                validValue = validita(n);

            } while (validValue == 1);

            playerCode[i]=n;

            validValue = 0;

            i++;
        } while (i < DIM);

        //funzione di controllo
        controllo(pcCode, playerCode);

        printf("\n");
        tent++;
    } while (tent < 11);
}
