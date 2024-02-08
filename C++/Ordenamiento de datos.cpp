#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
//Area de variables
int Lista[10], lisordena[10];
//Otro tipo de Burbuja
void metburbuja2(int listaa[],int tamalis)
{
	int cont1,cont2;
	int indiceintercambio;
	int auxi;
	//cont 1 es el ultimo elemento der la sublista
	cont1=tamalis-1;
	while(cont1>0)
	{
		indiceintercambio=0;
		for(cont2=0;cont2<cont1;cont2++)
		{
			if(listaa[cont2+1]<listaa[cont2])
			{
				auxi=listaa[cont2];
				listaa[cont2]=listaa[cont2+1];
				listaa[cont2+1]=auxi;
				indiceintercambio=cont2;
			}
			cont1=indiceintercambio;
		}
		
	}
}//fin de la funcion metodo burbuja
main()
{
	int cont1;
	//limpieza del vector
	for(cont1=0;cont1<10;cont1++)
	{
		Lista[cont1]=0;
	}
	cout<<"\n Metodos de ordenamiento de datos";
	cout<<"\n Llenado de datos \n";
	for(cont1=0;cont1<10;cont1++)
	{
		cout<<"Dame el dato ["<<(cont1+1)<<"]:";
		cin>>Lista[cont1];
	}
	//Despliegue de datos sin ordenar
	cout<<"\n La lista guarda es \n";
	for(cont1=0;cont1<10;cont1++)
	{
		cout<<Lista[cont1]<<"\t";
	}
	cout<<endl;
	metburbuja2(Lista,10);
	cout<<"\n \t La lista ordenada es \n";
	for(cont1=0;cont1<10;cont1++)
	{
		cout<<Lista[cont1]<<"\t";
	}
	cout<<endl;
	
}
