#include <stdio.h>

int main(){
	int matint[5][5],i,j;
	char matchar[5][5];

	printf("Direcciones de matriz de enteros:  \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			printf("%13d",&matint[i][j]);
		printf("\n");
	}

	printf("Direcciones de matriz de caracteres:  \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			printf("%13d",&matchar[i][j]);
		printf("\n");
	}
}