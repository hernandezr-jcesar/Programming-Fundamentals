/*Programa que calcula el factorial de un numero dado
Version 1
Programador: Julio Cesar Hernández Reyes
Grupo: 1CM55
Fecha 26 de Septiembre de 2019
*/
//Area de librerias
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
//Area de Variables y Constantes
int numero; contador;
float factorial;
main
{
	cout<<"\n \t \t Programa que calcula el factorial de un numero dado \n";
	cout<<"\n Dame el numero \n";
	cin>>numero;
	factorial=1;
	for(contador=1; contador<=numero; contador++)
	{
		factorial=factorial*contador;
	}
	cout<<"\n El factorial de "<<numero<<" es"<<factorial<<endl;
	factorial=numero;
	for(contador=numero-1; contador>-1; contador++)
	{
		factorial=factorial*contador;
	}
	cout<<"\n El factorial de "<<numero<<" es"<<factorial<<endl;
	system("pause");
	system("cls";)
}

