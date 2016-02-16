#include <stdio.h>
#include <stdlib.h>

void sumarAsignar(int *a, int b);	
void restarAsginar(int *a, int b);	
void multiplicarAsignar(int *a, int b);	
void dividirAsignar(int *a, int b);	

int main(){
	int *a=malloc(sizeof(int));;
	int b,i;
	printf("Ingrese los dos numeros a operar separados por un enter:  \n");
	scanf("%d",a);
	scanf("%d",&b);
	do{
		printf("Ingrese la opcion a operar: \n1.- sumar\n2.- restar\n3.- multiplicar\n4.- dividr\n5.- salir\n");
		scanf("%d",&i);
		switch(i){
			case 1:
				sumarAsignar(a,b);
				break;
			case 2:
				restarAsginar(a,b);
				break;
			case 3:
				multiplicarAsignar(a,b);
				break;
			case 4:
				dividirAsignar(a,b);
				break;
			case 5:
				return 0;
		}
	}while(i<1 || i>5);

	return 0;
}

void sumarAsignar(int *a, int b){
	*a=*a + b;
	printf("%d\n",*a);
}

void restarAsginar(int *a, int b){
	*a=(*a) - (b);
	printf("%d\n",*a);
}

void multiplicarAsignar(int *a, int b){
	*a=(*a) * b;
	printf("%d\n",*a);
}

void dividirAsignar(int *a, int b){
	*a=(*a) / (b);
	printf("%d\n",*a);
}				