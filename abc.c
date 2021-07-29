#include <stdio.h>

int calc(int a, int b){
	int rep[4];

	rep[0]=a+b;
	rep[1]=a-b;
	rep[2]=a*b;
	rep[3]=a/b;
	return rep[4];
}

int main(int argc, int *argv[]){
	int rep;

	float valA;
	float valB;
	float tabRep[4];

	if (argc==1){
		printf("Valeur de A ?\n");
		scanf("%f", &valA);

		printf("Valeur de B ?\n");
		scanf("%f", &valB);
	}
	else{
		valA=argv[1];
		valB=argv[2];
	}


	printf("A+B = %f\n", valA+valB);
	printf("A-B = %f\n", valA-valB);
	printf("A*B = %f\n", valA*valB);
	printf("A/B = %f\n", valA/valB);

	return 0;
}