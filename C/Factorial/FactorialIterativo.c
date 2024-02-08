#include <stdio.h>
void funcion1(int);
int funcion2(int);
int main(){
	int x;
	printf("Este programa calcula el factorial de cualquier numero \n"
	"entero positivo usando iteraciones\n\n");
	printf("Ingrese el numero al que desea calcularle su factorial\n";
	scanf("%d", &x);
	funcion1(x);
	return 0;
}
void funcion1(int x){
	int c=funcion2(x);
	printf("El factoral de %d es %d",x, c);
}
int funcion2(int b){
	int a=b;
	int e=1;
	while(a>1){
		e*=a;
		a--;
	}
	return e;
}

