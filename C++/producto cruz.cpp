/*
Programa que calcula el producto cruz o vectorial
Version 1
Grupo 1CM55
Programador: Julio Cesar Hernandez Reyes
*/
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
float vector1[3];
float vector2[3];
float vector3[3];
int cont1;
char salida;
main()
{
	salida='n';
	while(salida=='n')
	{
		cout<<"\n Programa que calcula el producto cruz";
		cout<<"\n Llenado del vector A";
		for(cont1=0; cont1<3; cont1++)
		{
			cout<<"\n Dame A[ "<<(cont1+1)<<"]: "<<endl;
			cin>>vector1[cont1];
		}
		for(cont1=0; cont1<3 ;cont1++)
		{
			cout<<"\n Dame B[ "<<(cont1+1)<<"]: "<<endl;
			cin>>vector2[cont1];
		}
			vector3[0]=vector1[1]*vector2[2]-vector2[1]*vector1[2];
			vector3[1]=-(vector1[0]*vector2[2]-vector2[0]*vector1[2]);
			vector3[2]=(vector1[0]*vector2[1]-vector2[0]*vector1[1]);
	
		cout<<"\n El vector resultante es: ( ";
		for(cont1=0; cont1<3; cont1++)
		{
		cout<<"\t "<<vector3[3];	
		}
			cout<<" )"<<endl;
			cout<<"\n Deseas salir del programa (s/n)"<<endl;
			cin>>salida;	
}
	cout<<"\n \t Fin del programa";
	system("pause");
	system("close");
}
