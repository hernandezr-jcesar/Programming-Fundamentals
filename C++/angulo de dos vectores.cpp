/*Programa que calcule el angulo de dos vectores
Version 1
Programador:Julio Cesar Hernandez Reyes
Grupo: 1ICM55
Fecha: 07 Octubre de 2019
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
//Declaracion de Variables
//Para matrices Tipo nombre arreglo 
float vectora[10], vectorb[10];
float prodpab=0, normaac=0, normabc=0, angulo=0;
int cont1, dimvect;
char res;
main()
{
	do{
	cout<<"\n Programa que calcula el angulo de inteseccion de los 2 vectores"<<endl;
	cout<<"\n Llenado de los vectores";
	cout<<"\n Dime la dimension del vector";
	cin>>dimvect;
	//Limpiezd de los vectores
	for(cont1=0; cont1<10; cont1++)
	{
		vectora[cont1]=0;
		vectorb[cont1]=0;
	}
	//Llenado de vectores
	//vector a
	for(cont1=0; cont1<dimvect; cont1++)
	{
		cout<<"\n Escribe la entrada "<<(cont1)<<" del vector A";
		cin>>vectora[cont1];
	}
	//vector b
	for(cont1=0; cont1<dimvect; cont1++)
	{
		cout<<"\n Escribe la entrada "<<(cont1)<<" del vector B";
		cin>>vectorb[cont1];
	}
	for(cont1=0; cont1<dimvect; cont1++)
	{
		prodpab=prodpab+vectora[cont1]*vectorb[cont1];
		normaac=normaac+vectora[cont1]*vectora[cont1];
		normabc=normabc+vectorb[cont1]*vectorb[cont1];
	}
	float cosang=prodpab/(pow(normaac,0.5)*pow(normabc,0.5));
	angulo=acos(cosang);
	cout<<"\n El angulo de interseccion es "<<angulo<<" radianes"<<endl;
	cout<<"\n El angulo en grados sexagesimales es "<<((angulo*180)/3.141592)<<"°"<<endl;
	cout<<"¿Desea salir?,presione la tecla S"<<endl;
	cin>>res;
	}while(res!='s');
	cout<<"fin del programa"<<endl;	
	system("pause");
	system("cls");
}





















