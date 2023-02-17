#include <stdio.h>

void fct(int nbVal, char *param[]){
	int i=0;
	while(i<nbVal){
		if(i==0){
			printf("Nom du prg: %s\n",param[0]);
		}
		else{
			printf("%s\n",param[i]);
		}
		i++;
	}

}

int main (int argc, char *argv[]){ 
	fct(argc, argv);
	return 0;
}
