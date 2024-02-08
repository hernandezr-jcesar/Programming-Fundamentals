/*Programa producto de matrices A y B
Version 1
Fecha 21 de Octubre de 2019
Grupo:1CM55
Programador:Julio Cesar Hernandez Reyes
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
//Area de variables globales o del programa principal
float x,y,respuesta;
/*
Para declarar una funcion es de la siguiente forma
tipo de salidanombredelafuncion(argumentos (tipo de entrada))
{
Area de declaracion de variables (estas variables actuan en la funcion)
sentencias:
sentencias:

return(variable(s) de salida)
}

Tipo desalida es valor y tipo de variable que devuelve la funcion 
nombredelafuncion el nombre que se pone a la funcionreturn termina la funcion y devuelve el valor pedido
*/	
float minimodedos(float a,float b)
{
	float aux;
	if(a<b)
	{
		cout<<"\n El minimo valor es "<<a<<endl;
		aux=b;
	}else
	{
		cout<<"\n El minimo valor es "<<b<<endl;
		aux=b;
	}
	return aux;
}
//Otro ejemplo sin el tipo de valor a 
encabezado()
{
	printf("\n\n%s\n%s\n%s\n%s\n%s\n%s\n\n",
	"		@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
	"		@Fundamentos a la Programacion@",
	"		@ESIME Culhuacan              @",
	"		@Grupo 1CM55                  @",
	"		@Julio Cesar Hernández Reyes  @",
	"		@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
}
int main()
{
	cout<<"\n Un ejemplo de como hacer y usar funciones "<<endl;
	cout<<"\n Uso de una funcion creada por el programador que obtiene el minimo "<<endl;
	cout<<"\n Dame un numero \n"<<endl;
	cin>>x;
	cout<<"\n Dame otro numero \n"<<endl;
	cin>>y;
	minimodedos(x,y);
	respuesta=minimodedos(x,y);
	cout<<"\n El minimo fue "<<respuesta<<endl;
	cout<<"\n Otro ejemplo de funciones que nbo recibe ni da nada"<<endl;
	encabezado();
	system("pause");
}



