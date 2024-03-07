#include <stdio.h>
#include "gameFunctions/gameFunction.h"
#include "color.h"

#define DIM 5

int main() {

    // DICHIARAZIONE DELLE VARIABILI

    int n;
    int pcCode[DIM];
    int playerCode[DIM];
    int validValue = 0;
    int tent = 1;
    int giuste;
    int i;

    CYAN;

    printf("  __  __                 _                                               _ \n"
           " |  \\/  |               | |                             (_)             | |\n"
           " | \\  / |   __ _   ___  | |_    ___   _ __   _ __ ___    _   _ __     __| |\n"
           " | |\\/| |  / _` | / __| | __|  / _ \\ | '__| | '_ ` _ \\  | | | '_ \\   / _` |\n"
           " | |  | | | (_| | \\__ \\ | |_  |  __/ | |    | | | | | | | | | | | | | (_| |\n"
           " |_|  |_|  \\__,_| |___/  \\__|  \\___| |_|    |_| |_| |_| |_| |_| |_|  \\__,_|\n\n");
    printf(" By Greta Brugnatti 3AII 07-03-2024\n");

    DEFAULT;

    //  CREAZIONE DEL CODICE SEGRETO
    generaCodice(pcCode);

    /*for(i=0;i<DIM;i++){
        printf("%d", pcCode[i]);
    }*/

    // RICHIESTA DEI DATI ALL'UTENTE

    do {

        PURPLE;

        printf("----- TENTATIVO %d -----\n", tent);

        DEFAULT;

        i = 0;

        do {

            do {

                MAGENTA;

                printf("Valore %d: ", i);
                scanf("%d", &n);

                DEFAULT;

                // CONTROLLO DEL DATO INSERITO

                validValue = validita(n);

            } while (validValue == 1);

            playerCode[i] = n;

            validValue = 0;

            i++;

        } while (i < DIM);

        // FUNZIONE INDIZI

        giuste = controllo(pcCode, playerCode);

        // VISUALIZZAZIONE DEL RISULTATO

        if(giuste==DIM){

            CYAN;

            printf("_   _         _   _                               _            _  _                    _  _              _ \n"
                   "| | | |       (_) | |                             | |          (_)| |                  | |(_)            | |\n"
                   "| |_| |  __ _  _  | |_  _ __   ___  __   __  __ _ | |_   ___    _ | |   ___   ___    __| | _   ___   ___ | |\n"
                   "|  _  | / _` || | | __|| '__| / _ \\ \\ \\ / / / _` || __| / _ \\  | || |  / __| / _ \\  / _` || | / __| / _ \\| |\n"
                   "| | | || (_| || | | |_ | |   | (_) | \\ V / | (_| || |_ | (_) | | || | | (__ | (_) || (_| || || (__ |  __/|_|\n"
                   "\\_| |_/ \\__,_||_|  \\__||_|    \\___/   \\_/   \\__,_| \\__| \\___/  |_||_|  \\___| \\___/  \\__,_||_| \\___| \\___|(_)\n"
                   "                                                                                                            ");

            DEFAULT;
        }

        printf("\n");
        tent++;

    } while (tent < 11);

    CYAN;

    printf(" _   _         _                                   _ \n"
           "| | | |       (_)                                 | |\n"
           "| |_| |  __ _  _    _ __    ___  _ __  ___   ___  | |\n"
           "|  _  | / _` || |  | '_ \\  / _ \\| '__|/ __| / _ \\ | |\n"
           "| | | || (_| || |  | |_) ||  __/| |   \\__ \\| (_) ||_|\n"
           "\\_| |_/ \\__,_||_|  | .__/  \\___||_|   |___/ \\___/ (_)\n"
           "                   | |                               \n"
           "                   |_|                               \n");

    DEFAULT;
}