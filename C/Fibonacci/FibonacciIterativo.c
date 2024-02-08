#include <stdio.h>
void funcion1(int num,int cont,int a,int b,int c);
void funcion2(int num,int cont,int a,int b,int c);

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
	funcion1(num,cont,a,b,c);
	}
	return 0;
}
void funcion1(int num,int conta,int a,int b,int c){
	funcion2(num,conta,a,b,c);
}
void funcion2(int um,int cont,int a,int b,int c){
	for(cont=0;cont<num-3;cont++){
	c=a+b;
	printf("%d,",c);
	a=b;
	b=c;	
	}
	if (cont<num-2){
	c=a+b;
	printf("%d.",c);
	a=b;
	b=c;
	}
}