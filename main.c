#include <stdio.h>

int main(void) {
    int sq1, sq2, scelta;
    sq1=0;
    sq2=0;
    printf("inizia la partita");
    do {
        do {
            printf("inserire 1 se squadra 1 segna.\n Inserire 2 se squadra 2 segna.\n");
            scanf("%d",&scelta);
        } while ((scelta < 0) || (scelta > 2) );
        switch (scelta) {
            case 1:
                sq1++;
                break;
            case 2:
                sq2++;
                break;

        } printf("\nil punteggio corrente e' (%d - %d)", sq1, sq2);
    } while (scelta != 0);
    printf("la partita e' finita.\n");
    if (sq1==sq2){
        printf("pareggio. (%d - %d)",sq1,sq2);
    } else if (sq1>sq2){
        printf("la squadra 1 ha vinto con %d!",sq1);
    } else {
        printf("la squadra 2 ha vinto con %d!", sq2);
    }
    printf("\n il punteggo e' (squadra 1: %d goal  - squadra 2: %d goal) ", sq1,sq2);
}