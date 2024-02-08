#include<stdio.h>
#include<stdlib.h>
int main(void){
	// Este algoritmo permite crear un arreglo de dimension 10, llenar
	// dicho arreglo de forma manual o de forma pseudo aleatoria
	// seguido de su impresion, una vez impreso se debera de ordenar de 
	// forma ascendente e imprimir nuevamente el arreglo ya ordenado
	int numero[10];
	int respuesta, conta, memo, x;
	do{
	system("cls");
	printf("Este algoritmo permite crear un arreglo de dimension 10\n");
	printf("De que forma quieres llenar los 10 espacios?\n");
	printf("1. Manual\n");
	printf("2. Pseudo aleatorio\n");
	printf("3. De ninguna forma.Cerrar el programa\n");
	scanf("%d",respuesta);
	switch(respuesta){
		case 1:
			conta=0;
			printf("hola");
			while(conta<10){
				printf("Ingresa el valor de la posicion %d",conta);
				scanf("%d",&numero[conta]);
				conta=conta+1;
			}
			conta=0;
			printf("Los numeros son:");
			conta=0;
			while(conta<10){
				printf("Posicion %d:%d",conta,numero[conta]);
				conta=conta+1;
			}
			conta=0;
			while(numero[conta]<numero[conta+1]){
				memo=numero[conta+1];
				numero[conta+1]=numero[conta];
				numero[conta]=memo;
				conta=conta+1;
			}
			conta=0;
			do{
				do{
					if(numero[conta]>numero[conta+1]){
						memo=numero[conta+1];
						numero[conta+1]=numero[conta];
						numero[conta]=memo;
					}
					conta=conta+1;
				}while(conta!=10);
				conta=1;
				x=x+1;
			}while(x!=10);
			printf("Los valores ordenados son:\n");
			while(conta!=10){
				printf("Posicion %d:%d",conta,numero[conta]);
				conta=conta+1;
			}
		break;
		case 2:
		break;
		case3:
		break;
		default:
			printf("El valor ingresado no esta en el menu favor de ingresar un valor que si este.\n");
		break;
	} 
		
	}while(respuesta!=3);
	return 0;
}
