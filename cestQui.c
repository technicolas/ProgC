# include <stdio.h>
# include <stdlib.h>
#include <string.h>



void test (char nom[20]);


int main(int argc, char const *argv[]){
	printf("Vous avez entré: \n");
	for(int i=1;i<argc;i++){
		printf("\t%s\n",argv[i]);
	}

	if(!strcmp(argv[1], "gaspard"))
		printf("C'est effectivement le plus gentil et le meilleur neveu à son tonton chéri!!!\n");

	else if(!strcmp(argv[1], "nicolas") || !strcmp(argv[1], "nico"))
		printf("He's the best of all the universe!!!\n");

	else
		printf("Je ne peux rien dire!\n");

	return 0;
}

