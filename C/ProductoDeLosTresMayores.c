#include<stdio.h>
#include<stdlib.h>
int main(void){
	// El siguiente algoritmo resivira n numeros enteros solicitando uno a uno al usuario
	// Como resultado debera de imprimir los tres valores mayores asi como el producto de los mismos
	// se requieren 3 valores y que el usuario decida cuando finalizar la asignacion de numeros
	// siempre que sean mayores o iguales a tres numeros
	int num1, num2, num3, memo, result, producto, pregunta;
	printf("Este es un algoritmo que ordena numeros del mayor al menor\n");
	printf("Asi como dar el producto de los mismos\n");
	printf("Solo tomara los 3 numeros mas grandes\n");
	printf("Ingresa un numero\n");
	scanf("%d",&num1);
	
	printf("Ingresa otro numero\n");
	scanf("%d",&num2);
	if(num2>num1){
		memo=num2;
		num2=num1;
		num1=memo;
	}
    printf("Ingresa otro numero\n");
	scanf("%d",&num3);
	if(num3>num1){
		memo=num3;
		num3=num1;
		num1=memo;
	}
	if(num3>num2){
		memo=num3;
		num3=num2;
		num2=memo;
	}
	printf("Desea ingresar otro numero?\n");
	printf("1. SI\n");
	printf("2. NO\n");
	scanf("%d",&pregunta);
	switch(pregunta){
		case 1:
			do{
			printf("Ingrese otro numero\n");
			scanf("%d",&memo);
			if(memo>num1){
				result=num1;
				num1=memo;
				memo=result;
			}
			if(memo>num2){
				result=num2;
				num2=memo;
				memo=result;
			}
			if(memo>num3){
				result=num3;
				num3=memo;
				memo=result;
			}
			printf("Desea ingresar otro numero?\n");
			printf("1. SI\n");
			printf("2. NO\n");
			scanf("%d",&pregunta);
			}while(pregunta!=2);
			printf("Los numeros ordenados del mayor al menor de los que ingreso son: %d, %d, %d \n",num1,num2,num3);
			producto=(num1*num2*num3);
			printf("El producto de los tres numeros mayores es %d \n",producto);
			break;
		case 2:
			printf("Los numeros ordenados del mayor al menor de los que ingreso son: %d, %d, %d \n",num1,num2,num3);
			producto=(num1*num2*num3);
			printf("El producto de los tres numeros mayores es %d \n",producto);
			break;
		case 3:
			break;
		default:
			printf("Valor ingresado incorrecto, favor de seleccionar una opcion correcta\n");
			break;
	}
	return 0;
}





