/*Programa que calcule el producto de matrices
Version 1
Programador:Julio Cesar Hernandez Reyes
Grupo: 1ICM55
Fecha: 07 Octubre de 2019
*/
//Area de librerias

//declaracion de variabl
#include<iostream>
#include<math.h>
using namespace std;
float mata[10][10];
float matb[10][10];
float matc[10][10];
int dimrena, dimrenb, dimcola, dimcolb, cont1, cont2, cont3;
char res;
main()
{
	res='s';
	while(res=='s')
	{
		system("cls");
		//Limpieza de la matriz
		for(cont1=0; cont1<10; cont1++)
		{
			for(cont2=0; cont2<10; cont2++)
			{
				mata[cont1][cont2]=0;
				matb[cont1][cont2]=0;
				matc[cont1][cont2]=0;
			}
		}
		cout<<"\n Producto de Matrices"<<endl;
		cout<<"\n Dame el numero de renglones de la matriz A"<<endl;
		cin>>dimrena;
		cout<<"Dame el numero de columnas de la matriz A"<<endl;
		cin>>dimcola;
		cout<<"Dame el numero de renglones de la matriz B"<<endl;
		cin>>dimrenb;
		cout<<"Dame el numero de columnas de la matriz B"<<endl;
		cin>>dimcolb;
		if(dimcola==dimrenb)
		{
			//Llenado de la matriz a
			for(cont1=0; cont1<dimrena;cont1++)
			{
				for(cont2=0; cont2<dimcola; cont2++)
				{
					cout<<"Dame A["<<(cont1+1)<<","<<(cont2+1)<<"]"<<endl;
					cin>>mata[cont1][cont2];
				}	
			}
			//Llenado de la matriz b
			for(cont1=0; cont1<dimrenb;cont1++)
			{
				for(cont2=0; cont2<dimcolb; cont2++)
				{
					cout<<"Dame B["<<(cont1+1)<<"]["<<(cont2+1)<<"]"<<endl;
					cin>>matb[cont1][cont2];
				}	
			}
			//Producto de Matrices
			for(cont1=0; cont1<dimrena; cont1++)
			{
				for(cont2=0; cont2<dimcolb; cont2++)
				{
					for(cont3=0; cont3<dimcola; cont3++)
					{
						matc[cont1][cont2]= matc[cont1][cont2]+mata[cont1][cont3]*matb[cont3][cont2];	
					}	
				}	
			}
			//Despliegue de las matrices A, matriz By el resultado
			//matriz A
			cout<<"La matriz A es"<<endl;	
			system("pause");
			for(cont1=0; cont1<dimrena; cont1++)
			{
				cout<<"\n|";
				for(cont2=0; cont2<dimcola; cont2++)
				{
					cout<<"\t"<<mata[cont1][cont2];
				}
				cout<<"|";
			}
			//matriz B
			cout<<"La matriz B es"<<endl;	
			for(cont1=0; cont1<dimrenb; cont1++)
			{
				cout<<"\n|";
				for(cont2=0; cont2<dimcolb; cont2++)
				{
					cout<<"\t"<<matb[cont1][cont2];
				}
				cout<<"|";
			}
			//matriz C
			cout<<"La matriz C es"<<endl;	
			for(cont1=0; cont1<dimrena; cont1++)
			{
				cout<<"\n|";
				for(cont2=0; cont2<dimcolb; cont2)
				{
					cout<<"\t"<<matc[cont1][cont2];
				}
				cout<<"|";
			}
		}
		else
		{
			cout<<"No se puede realizar la multiplicacion de la matriz";
		}
		cout<<"Deseas continuar tecla s para salir otra tecla";
		cin>>res;
	}
	system("pause");
	system("cls");
	system("time");
}
