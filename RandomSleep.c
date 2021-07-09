#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void){
    int nbCoup = 1000;
    srand(time(NULL));
    int som, moy=0;
    int tempsAttente=2;

    for(int i = 0; i<nbCoup; i++){
        int a = rand()%10+1;
        printf(" %d ", a);
        // usleep(10000);
        som+=a;
    }
    printf("\n\tLes résultats dans %d secondes!\n", tempsAttente);

    sleep(tempsAttente);
    printf("\n\tSom: %d - Moy: %d\n", som, moy=som/nbCoup);

    return 0;
}
