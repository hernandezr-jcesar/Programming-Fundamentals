#include <stdio.h>
int fibonacci(int num, int cont, int a, int b, int c);
int main (){
	int num, cont=0, a=0, b=1, c;
	printf("Este progrma es capaz de imprimir en consola\n"
	"una cantidad finita de numeros de la sucesion de \n"
	"fibonacci la cual empieza en 0 y 1; a partir de estos\n"
	"cada termino es la suma de los dos anteriores.\n\n"
	"Cuantos numeros quieres crear:");
	scanf("%d",&num);
	if(num==2){
	printf("0,1.");
	}
	else if(num==1){
	printf("0.");
	}
	else{
	printf("0,1,");
	fibonacci(num,cont,a,b,c);
	}
	printf("/n");
	return 0;
}
int fibonacci(int num, int cont,int a,intb,int c){
	if(cont==num-2){
	return 1;
	}
	else if(cont==num-3{
	c=a+b;
	printf("%d.",c);
	a=b;
	b=c;
	cont++;
	return fibonacci(num,cont,a,b,c);
	}
	else{
	c=a+b;
	printf("%d,",c);
	a=b;
	b=c;
	cont++;
	return fibonacci(num,cont,a,b,c);
	}
}