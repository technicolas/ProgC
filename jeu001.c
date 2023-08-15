#include <stdio.h>
#include <stdlib.h>

int addi(int a, int b){
    return a+b;
}
int sous(int a, int b){
    return a-b;
}
int mult(int a, int b){
    return a*b;
}
double divi(double a, double b){
    return (a/b);
}

void intro(int n1, int n2){
    //clrscr();
    system("cls");

    printf("Voici les donnees:\n");
    printf ("a+b = %d\n", addi(n1,n2));
    printf ("a-b = %d\n", sous(n1,n2));
    printf ("a*b = %d\n", mult(n1,n2));
    printf ("a/b = %.3f\n", divi(n1,n2));
}

int test(int nb, int chiffre){
    int rep;

    printf("\n\n\tQue vaut le nombre %d ?\n", nb);
    scanf("%d",&rep);
    if(rep==chiffre){
        printf("OK\n");
        return 0;
    }
    else{
        printf("Desole, ce n'est pas correct... ");
        if(rep>chiffre)
            printf(">\n");
        else
            printf("<\n");
        return 1;
    }
}

void jeu(int a, int b, int cptFois){

    int repA, repB;
    int cpt=0;
    int affichTestX = 1;
    int affichTestY = 1;

    while((repA!=a || repB!=b)&& cpt<cptFois){
        cpt++;                          // Compteur de nombre d'essais.
        int x=0,y=0;                    // Variables de retour de la fonction test -> Si 0, le chiffre a été trouvé.

        printf("\n\nEssai num %d", cpt);

        intro(a, b);                    // Envoi vers la fct Intro des deux nombres à trouver.

        if(affichTestX==1){
            x=test(1,a);
            if(x==0)
                affichTestX=0;          // Si on a trouve le nombre, on le l'affiche plus la fois suivante.
        }

        if(affichTestY==1){
            y=test(2,b);
            if(y==0)
                affichTestY=0;
        }

        if((x+y)==0){                   // Si la somme des 2 valeurs de retour de la fonction "test" est égale à 0, c'est OK.
           printf("C'est gagne!");
           exit(0);
        }
        else{
            if(cpt<5)
                printf("Vous pouvez recommencer encore %d fois!\n", cptFois-cpt);
            else
                printf("\nC'est PERDU!!!");
        }
        getch();
//        printf("\n%d\n",x);
//        printf("%d\n",y);
    }
}

int main(){
    float n1, n2;
    int cptFois=5;

    printf("Jeu de calcul\n");

    printf("Nombre 1 : ");
    scanf("%f",&n1);
    printf("Nombre 2 : ");
    scanf("%f",&n2);

    intro(n1, n2);
    jeu(n1,n2,cptFois);

    getch();
    return 0;
}
