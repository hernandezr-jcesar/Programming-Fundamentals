#include<stdio.h>
/*
El siguiente archivo resivira un caracter y un numero entero
e imprimira dichos valores con las distintas mascaras de formatos 
de salida
*/
int main(){
	int num1=0;
	char palabra;
	printf("Ingresa un numero entero \n");
	scanf("%d",&num1);
	printf("Ingrese una palabra cualquiera \n");
	scanf("\n %c",&palabra);

	printf("El valor de su numero es: %c \n",num1);
	printf("El valor de su numero es: %d \n",num1);
	printf("El valor de su numero es: %i \n",num1);
	//printf("El valor de su numero es: %e \n",num1); expects 'double'
	//printf("El valor de su numero es: %E \n",num1); expects 'double'
	//printf("El valor de su numero es: %f \n",num1); expects 'double'
	//printf("El valor de su numero es: %f \n",num1); expects 'double'
	//printf("El valor de su numero es: %o \n",num1); expects 'double'
	//printf("El valor de su numero es: %s \n",num1); expects 'char *'
	printf("El valor de su numero es: %u \n",num1);
	printf("El valor de su numero es: %x \n",num1);
	//printf("El valor de su numero es: %p \n",num1); expects 'void *'
	//printf("El valor de su numero es: %n \n",num1); expects 'int *'

	printf("La palabra que ingreso es: %c \n",palabra);
	//printf("La palabra que ingreso es: %d \n",palabra); expects 'double'
	//printf("La palabra que ingreso es: %i \n",palabra); expects 'double'
	//printf("La palabra que ingreso es: %e \n",palabra); expects 'double'
	//printf("La palabra que ingreso es: %E \n",palabra); expects 'double'
	//printf("La palabra que ingreso es: %f \n",palabra); expects 'double'
	//printf("La palabra que ingreso es: %g \n",palabra); expects 'double'
	//printf("La palabra que ingreso es: %o \n",palabra); expects 'double'
	//printf("La palabra que ingreso es: %s \n",palabra); expects 'char'
	//printf("La palabra que ingreso es: %u \n",palabra); expects 'double'
	//printf("La palabra que ingreso es: %x \n",palabra); expects 'double'
	//printf("La palabra que ingreso es: %p \n",palabra); expects 'void'
	//printf("La palabra que ingreso es: %n \n",palabra); expects 'int'

return 0;
}

