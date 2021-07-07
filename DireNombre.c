# include <stdio.h>

void parler(int);
int fct(int, int);
int tailleNb(int);
int exposant(int, int);

int main(){
	int nb;
	int a=0;
	int tab[3];

	printf("Veuillez entrer le nombre désiré: \t");
    	scanf("%d", &nb);
		
	int taille = tailleNb(nb);
	// printf("Taille du nombre entré: %d\n", tailleNb(nb));

	tab[3]=fct(nb, taille);	
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
			printf("vingt");
			break;
		default:
			printf("Erreur");
			break;
	}
}

int heure(int nb){
	int tab[3];
	int reste = 0;
	int mil = nb/1000;
	
	if(mil>0){
		printf("%d - ", mil);
    		parler(mil);
	}
	tab[0]=mil;
}

int fct(int nb, int tailleNb){
	int tab[tailleNb];
	int reste = 0;

	for (int i = tailleNb-1; i >= 0; i--){
		tab[i] = nb / (exposant(10,i));
		nb = nb - (tab[i] * exposant(10,i));
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
