# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void parler(int);
int fct(int, int);
int tailleNb(int);
int exposant(int, int);

int main(int argc, char const *argv[]){
	int nb;
	int a=0;
	time_t t;
	time(&t);
	printf("\nTemps: %s",ctime(&t));

	if(argc>1)
		nb=atoi(argv[1]);
	else{
		printf("Veuillez entrer le nombre désiré: \t");
		scanf("%d", &nb);
	}
		
	fct(nb, tailleNb(nb));	
	return 0;
}

void parler(int nombre){
	switch (nombre){
		case 0:
			printf("zéro");
			break;
		case 1:
			printf("un");
			break;
		case 2:
			printf("deux");
			break;
		case 3:
			printf("trois");
			break;
		case 4:
			printf("quatre");
			break;
		case 5:
			printf("cinq");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("sept");
			break;
		case 8:
			printf("huit");
			break;
		case 9:
			printf("neuf");
			break;
		case 10:
			printf("dix");
			break;
		case 20:
			printf("vingt");
			break;
		case 30:
			printf("trente");
			break;
		case 40:
			printf("quarante");
			break;
		case 50:
			printf("cinquante");
			break;
		default:
			printf("Erreur");
			break;
	}
}

int fct(int nb, int tailleNb){
	int tab[tailleNb];

	for (int i = tailleNb-1; i >= 0; i--){
		tab[i] = nb / (exposant(10,i));
		nb-=(tab[i] * exposant(10,i));
		printf("%d - ", tab[i]);
    		parler(tab[i]);
		printf("\n");
	}
	return tab[tailleNb];
}

int tailleNb(int nb){
	int i;
	for(i=1; nb>9; nb/=10, i++);
	return i;
}

int exposant(int base, int exposant){
	int rep=1;
	for(int i=0; i<exposant; rep*=base, i++);
	return rep;
}
