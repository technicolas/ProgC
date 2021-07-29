#include <stdio.h>

int main(int argc, char const *argv[])
{
	if(argc>1)
		for (int i = 0; i < argc; i++){
			printf("%s\n", argv[i]);
		}
	else
		printf("KO\n");
	return 0;
}