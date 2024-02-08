/* Programa que calcula el area de un rectangulo, triangulo, circulo, trapecio.
version 1
Fecha 14 de Octubre de 2019
Programador: Julio Cesar Hernandez Reyes
Grupo: 1CM55
Fecha: 14 de Octubre del 2019
*/
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
float a, b, c, resultado;
int opcion;
float Pi=3.14159265359;
char res;
main()
{
	do{
		cout<<"\n \t\t Programa para calcular areas de figuras geometricas";
		cout<<"\n 1.Rectangulo \n";
		cout<<"\n 2.Triangulo \n";
		cout<<"\n 3.Circulo.\n";
		cout<<"\n 4.Trapecio \n";
		cout<<"\n \t\tFavor de presionar el numero de  la operacion que desea realizar:";
		cin>>opcion;
		switch(opcion)
		{
			case 1:
				cout<<"\n Calculo del Area de un Rectangulo \n";
				cout<<"\n Favor de proporcionar la base del rectangulo en metros \n";
				cin>>a;
				cout<<"\n Favor de proporcionar la altura del rectangulo en metros \n";
				cin>>b;
				resultado=a*b;
				cout<<"El area del Rectangulo es: "<<resultado<<"m2"<<endl;
				break;
			case 2:
				cout<<"\n Calculo del Area de un Triangulo \n";
				cout<<"\n Favor de proporcionar la base del triangulo en metros \n";
				cin>>a;
				cout<<"\n Favor de proporcionar la altura del triangulo en metros \n";
				cin>>b;
				resultado=(a*b)/2;
				cout<<"El area del Triangulo es: "<<resultado<<"m2"<<endl;
				break;
			case 3:
				cout<<"\n Calculo del Area de un Circulo \n";
				cout<<"\n Favor de proporcionar el radio del circulo en metros \n";
				cin>>a;
				resultado=Pi*(a*a);
				cout<<"El area del Circulo es: "<<resultado<<"m2"<<endl;
				break;
			case 4:
				cout<<"\n Calculo del Area de un Trapecio \n";
				cout<<"\n Favor de proporcionar la base mayor del trapecio en metros \n";
				cin>>a;
				cout<<"\n Favor de proporcionar la base menor del trapecio en metros \n";
				cin>>b;
				cout<<"\n Favor de proporcionar la altura del trapecio en metros \n";
				cin>>c;
				resultado=((a+b)*c)/2;
				cout<<"El area del Trapecio es: "<<resultado<<"m2"<<endl;
				break;
				
			
		}
		cout<<"Si desea salio presione la tecla s, si no cualquier otra tecla"<<endl;
		cin>>res;
	}while(res!='s');
		
		cout<<"fin del programa"<<endl;	
		system("pause");
		system("cls");
	

}
