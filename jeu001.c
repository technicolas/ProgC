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

int test(int nb, int chiffre){
    int rep;

    printf("\n\n\tQue vaut le nombre %d ?\n", nb);
    scanf("%d",&rep);
    if(rep==chiffre){
        printf("OK\n");
        return 0;
    }
    else{
        printf("Desole, ce n'est pas correct...\n");
        return 1;
    }
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

void jeu(int a, int b, int cptFois){

    int repA, repB;
    int cpt=0;
//
//    printf("%d\n",a);
//    printf("%d\n",b);

    while((repA!=a || repB!=b)&& cpt<cptFois){
        cpt++;
        int x=0,y=0;
        printf("\n\nEssai num %d", cpt);

        x=test(1,a);
        y=test(2,b);

        if((x+y)==0){
           printf("C'est gagne!");
           exit(0);
        }
        else{
            if(cpt<5)
                printf("Vous pouvez recommencer encore %d fois!\n", cptFois-cpt);
            else
                printf("\nC'est PERDU!!!");
        }
//        printf("\n%d\n",x);
//        printf("%d\n",y);
    }
}

int main(){
    printf("Jeu de calcul\n");
    float n1, n2;
    int cptFois=5;

    printf("Nombre 1 : ");
    scanf("%f",&n1);
    printf("Nombre 2 : ");
    scanf("%f",&n2);
    intro(n1, n2);
    jeu(n1,n2,cptFois);

    getch();
    return 0;
}
