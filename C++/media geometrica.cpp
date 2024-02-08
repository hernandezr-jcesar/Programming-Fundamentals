#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int datos;
float mediage;
float mediar;
char res;
float mediageometrica(int n)
{
	int cont1, lim;
	float prod, dato, medge, pot;
	prod = 1;
	dato = 0;
	lim = n;
	for(cont1=1; cont1<=lim; cont1++)
	{
		cout<<"\n Dame el dato "<<cont1<<": ";
		cin>>dato;
		prod=prod*dato;
	}
	pot=1.0/lim;
	medge=pow(prod,pot);
	return(medge);
	/*float mediaaritmetica(int n)
	{
		cout<<"\n Quedas pendiente de hacer";
		cout<<"\n Se hara el jueves";
		return;
	}*/
}
float mediaaritmetica(int n)
{
	int cont1, lim=n;
	float sum=0, dato=0, med=0, pot=0;
	cout<<"Datos para la media aritmetica"<<endl;
	
	for(cont1=1; cont1<=lim; cont1++)
	{
		cout<<"\n Dame el dato "<<cont1<<": ";
		cin>>dato;
		sum=sum+dato;
		dato=0;
	}
	med=sum/lim;
	return(med);
}

main()
{
	do
	{
	cout<<"\n Ejemplo de como hacer y usar funciones"<<endl;
	cout<<"\n Funcion que calcula la media geometrica"<<endl;
	cout<<"\n Dame el numero de datos"<<endl;
	cin>>datos;
	mediage=mediageometrica(datos);
	mediar=mediaaritmetica(datos);
	cout<<"\n La media geometrica es "<<mediage;
	cout<<"\n La media aritmetica es "<<mediar;
	cout<<"\n Deseas continuar presiona cualquier tecla si quieres salir presiona N ó n";
	cin>>res;
	}while(res!='N'or res!='n');
	cout<<"\n Otro ejemplo de funciones que no recibe ni da nada"<<endl;
	
	system("pause");
}
