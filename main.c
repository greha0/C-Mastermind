#include <stdio.h>
#include "gameFunctions/gameFunction.h"

#define DIM 5

int main() {

    int n;
    int pcCode[DIM];
    int playerCode[DIM];
    int pos[DIM];
    int validValue = 0;
    int tent=1;
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

            validValue = 0;

            i++;
        } while (i < DIM);

        //QUI VA LA FUNZIONE DELLE RISPOSTE DEL PC
        controllo(pcCode, playerCode, pos);
        printf("\n");
        printf("%d", pos[0]);
        printf("%d", pos[1]);
        printf("%d", pos[2]);
        printf("%d", pos[3]);
        printf("%d", pos[4]);

        printf("\n");
        tent++;
    } while (tent < 11);
}

/*for(i=1;i<DIM+1;i++){
    printf("Valore %d: ", i);
    scanf("%d", &n);
    playerCode[i-1]=n;
}

for(i=0;i<DIM;i++){
    printf("%d", playerCode[i]);
}*/
