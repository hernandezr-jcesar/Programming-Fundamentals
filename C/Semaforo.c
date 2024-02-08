#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int opcion;
	do{
		system("cls");
		printf("Escribe el numero del color que estes viendo en el semaforo,\n");
		printf("1. Verde\n");
		printf("2. Rojo\n");
		printf("3. Amarillo\n");
		printf("4. Terminar programa=\n");
		scanf("%d",&opcion);
		switch(opcion){
		
			case 1:
				printf("El color del semaforo es Verde.Entonces puedes avanzar\n");
				getch();
				break;
			
			case 2:
				printf("El color del semafor es Rojo.Entonces deberas detenerte\n");
				getch();
				break;
			
			case 3:
				printf("El color del semaforo es Amarillo. Entonces deveras bajar tu velocidad\n");
				getch();
				break;
				
			case 4:
				break;
			
			default:
				printf("El color ingresado no esta en las opciones de un semaforo\n");
				printf("favor de ingresar un color valido.\n");
		 		getch();
				break;
			}
		
	}while(opcion!=4);

	return 0;
}
