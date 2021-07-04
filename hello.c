# include <stdio.h>
# include <time.h>
# include <math.h>
# include <string.h>

void afficheMsg(int);
int calc(int,int);
void parler(int);
int fct(int, int);
int nombreChiffres(int);

int main(){
	int nb;
	int a=0;

	printf("Veuillez entrer le nombre d'itérations désiré: \t");
    scanf("%d", &nb);

	int nbChiffres = nombreChiffres(nb);
	int tab[nbChiffres-1];


	// if(nb>1000||nb<0)
	// 	nb=1;
	// else if(nb==555)
	// 	nb=69;
	// else if(nb%2)
	// 	nb=2;

	// afficheMsg(nb);
	// tab[3]=fct(nb);

	fct(nb, nbChiffres);	

    // printf("Nombre de chiffres dans le nombre entré: %d\n", nbChiffres);
	return 0;
}


void afficheMsg(int nbFois){
	for(int i=1; i<nbFois+1; i++){
		printf("%i\tJe ne copie pas sur mon voisin.\n",i);
	}
}

int calc(int nb1, int nb2){
	return nb1+nb2;
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
		default:
			printf("Erreur");
			break;
	}
}

int fct(int nb, int nbChiffres){
	int indexTab = nbChiffres-1;
	int tab[indexTab];
	int reste = nb;

	// printf("\nLe nombre des chiffres est : %d", nbChiffres);
	// printf("\nL'index est: %d", indexTab);
	
	for(int i=nbChiffres; i>=0; i--){
		tab[indexTab] = reste/(10^indexTab);
		reste = reste-(tab[indexTab]*(10^indexTab));
		if(tab[indexTab]>0){
			printf("\n%d - ", tab[indexTab]);
    			parler(tab[indexTab]);
		}
	}
	return tab[indexTab];
}

int nombreChiffres(int nombre){
	int i;
	for(i=1; nombre>=10; nombre/=10, i++);

	// printf("\nLe nombre des chiffres dans la fonction de calcul est : %d", i);
	return i;
}

// int fct1(int nb){
// 	int tab[3];
// 	int reste = 0;
// 	int mil = nb/1000;
// 	if(mil>0){
// 		printf("%d - ", mil);
//     		parler(mil);
// 	}
// 	tab[0]=mil;

// 	reste = nb-(mil*1000);
// 	int cent = reste/100;
//     	if(cent>0){
// 		printf("\n%d - ", cent);
//     		parler(cent);
// 	}
// 	tab[1]=cent;


// 	reste = reste-(cent*100);
// 	int diz = reste/10;
//     	if(diz>0){
// 		printf("\n%d - ", diz);
// 		parler(diz);
// 	}
// 	tab[2]=diz;

// 	reste = reste-(diz*10);
// 	int unite = reste;
//     	if(unite>0){
// 		printf("\n%d - ", unite);
//     		parler(unite);
// 	}
//     	printf("\n");
// 	tab[3]=unite;
	
// 	for(int i=0; i<4; i++){
// 		if(tab[i]>0){
// 			printf("\n%d - ", tab[i]);
//     			parler(tab[i]);
// 		}
// 	}

// 	return tab[3];
// }
