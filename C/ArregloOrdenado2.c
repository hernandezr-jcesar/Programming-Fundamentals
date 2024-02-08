/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

int main() {
	int conta;
	int memo;
	int numero[10];
	char respuesta[MAX_STRLEN];
	int x;
	/* Este algoritmo permite crear un arreglo de dimension 10, llenar */
	/* dicho arreglo de forma manual o de forma pseudo aleatoria */
	/* seguido de su impresion, una vez impreso se debera de ordenar de  */
	/* forma ascendente e imprimir nuevamente el arreglo ya ordenado */
	printf("Este algoritmo permite crear un arreglo de dimension 10\n");
	printf("¿De que forma quieres llenar los 10 espacios?\n");
	printf("M(manual) ó  P(Pseudo aleatorio)\n");
	scanf("%s",respuesta);
	if ((strcmp(respuesta,"M")==0)) {
		conta = 1;
		while ((conta<11)) {
			printf("Ingresa el valor de la posicion %i\n",conta);
			scanf("%i",&numero[conta-1]);
			conta = conta+1;
		}
		conta = 1;
		printf("Los numeros son:\n");
		conta = 1;
		while ((conta<11)) {
			printf("Posicion %i: %i\n",conta,numero[conta-1]);
			conta = conta+1;
		}
		conta = 1;
		while ((numero[conta-1]<numero[conta])) {
			memo = numero[conta];
			numero[conta] = numero[conta-1];
			numero[conta-1] = memo;
			conta = conta+1;
		}
		conta = 1;
		do {
			do {
				if ((numero[conta-1]>numero[conta])) {
					memo = numero[conta];
					numero[conta] = numero[conta-1];
					numero[conta-1] = memo;
				}
				conta = conta+1;
			} while (conta!=10);
			conta = 1;
			x = x+1;
		} while (x!=10);
		printf("Los valores ordenados son:\n");
		while ((conta<11)) {
			printf("Posicion %i: %i\n",conta,numero[conta-1]);
			conta = conta+1;
		}
	}
	if ((strcmp(respuesta,"P")==0)) {
		conta = 1;
		printf("Los valores de las posiciones se llenaran de forma pseudoaleatoria\n");
		while ((conta<11)) {
			numero[conta-1] = (rand()%100);
			conta = conta+1;
		}
		printf("Los valores ya estan asignados\n");
		conta = 1;
		printf("Los valores son\n");
		while ((conta<11)) {
			printf("Posicion %i: %i\n",conta,numero[conta-1]);
			conta = conta+1;
		}
		conta = 1;
		while ((numero[conta-1]<numero[conta])) {
			memo = numero[conta];
			numero[conta] = numero[conta-1];
			numero[conta-1] = memo;
			conta = conta+1;
		}
		conta = 1;
		do {
			do {
				if ((numero[conta-1]>numero[conta])) {
					memo = numero[conta];
					numero[conta] = numero[conta-1];
					numero[conta-1] = memo;
				}
				conta = conta+1;
			} while (conta!=10);
			conta = 1;
			x = x+1;
		} while (x!=10);
		printf("Los valores ordenados son:\n");
		while ((conta<11)) {
			printf("Posicion %i: %i\n",conta,numero[conta-1]);
			conta = conta+1;
		}
	}
	return 0;
}

