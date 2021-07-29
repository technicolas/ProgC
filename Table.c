# include <stdio.h>
# include <stdlib.h>

void mult(int, int);
void imprimeDiviseurs(int, int);

int main(int argc, char const *argv[]){
	int nb;
	int limite = 20;
	
	if(argc<2){
		printf("Quelle table voulez-vous imprimer ? \t");
    		scanf("%d", &nb);
	}
	else
		nb=atoi(argv[1]);

	mult(nb,limite);
//	imprimeDiviseurs(nb,limite);

	return 0;
}

void mult(int table, int fin){
	printf("Voici la table des %d:\n",table);
	for(int i=0; i<fin+1; i++){
		printf("%d\t*\t%d\t=\t%d\n",i,table,i*table); 
	}
}

void imprimeDiviseurs(int nb, int limite){
	int max = nb*limite;
	int reste = 0;
	
	while(max >= 0){
		printf("%d ",reste);
		reste=max%2;
		printf("%d \n", max);
		max=max/2;
	}
}
