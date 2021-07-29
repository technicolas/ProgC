# include <stdio.h>
# include <stdlib.h>

void mult(int, int);

int main(int argc, char const *argv[]){
	int nb;
	int limite = 20;

	for(int i=1; i<argc ; i++){	
		printf("%d \n", argv[i]);
	}
	printf("Quelle table voulez-vous imprimer ? \t");
    	scanf("%d", &nb);
	
	// if(argc<1){
	//	printf("Quelle table voulez-vous imprimer ? \t");
    	//	scanf("%d", &nb);
	// }
	// else
	//	nb=atoi(argv[1]);

	mult(nb,limite);

//	int max = nb*limite;
//	int reste = 0;
	
//	while(max >= 0){
//		printf("%d ",reste);
//		reste=max%2;
//		printf("%d \n", max);
//		max=max/2;
//	}
	return 0;
}

void mult(int table, int fin){
	for(int i=0; i<fin+1; i++){
		printf("%d\t*\t%d\t=\t%d\n",i,table,i*table); 
	}
}
