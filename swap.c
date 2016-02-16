#include <stdio.h>
#include <stdlib.h>

void swap(char *a, char *b);

int main(){
	char *a=malloc(sizeof(char)),*b=malloc(sizeof(char));
	printf("Ingrese dos caracteres separados por espacios:  ");
	scanf("%c %c",a,b);
	printf("Los caracteres originales son: a= %c  y b= %c\n\n",*a,*b);
	swap(a,b);

	return 0;
}

void swap(char *a, char *b){
	char aux;
	aux=*a;
	*a=*b;
	*b=aux;
	printf("Los caracteres cambiados son: a= %c y b= %c\n\n",*a,*b);
}