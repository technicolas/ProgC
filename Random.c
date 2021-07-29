#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
 
int main(int argc, char const *argv[]){
    int temps = 0;
    int k=0;
    int nbCoup = 100;
    srand(time(NULL));
    int som, moy=0;
    int tempsAttente=2;

    if(argc == 2)
        temps = 10000;
    else if (argc == 3)
        temps = 50000;
    else if (argc >3){
        printf("\n\tPlease, one or two arguments maximum! Thanks\n");
        sleep(tempsAttente*3);
    }
    else
        temps = 0;

    for(int i = 0; i<nbCoup; i++){
        for (int j = 0; j < 5; j++, k++){
            int a = rand()%10+1;
            printf(" %d \t", a);
            usleep(temps);
            som+=a;
        }
        printf(" %d \t\n", som/k);
    }
    if(tempsAttente==1)
        printf("\n\tResults in %d second!\n", tempsAttente);
    else
        printf("\n\tResults in %d seconds!\n", tempsAttente);
    sleep(tempsAttente);
    printf("\n\tSom: %d - Moy: %d\n", som, moy=som/nbCoup);
  
    return 0;
}
