#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int exposant(int);

int main(int argc, char const *argv[]){
	int nb=0;
	
	if(argc>1){
		nb=atoi(argv[1]);
	}
	else{
		printf("Quel exposant de 2 voulez vous calculer ?\n");
		scanf("%d",&nb);
	}

	if(nb>30)
		printf("\nValeur  %d trop élevée, je ne peux pas la calculer!\n", nb);
	else
		printf("\n2e%d = %d\n",nb,exposant(nb));
  	
	return 0;
}

int exposant(int nb){
	int i=0;
	int rep = 1;
	
	for(i=0;i<nb;i++)
		rep*=2;
	return rep;
}
