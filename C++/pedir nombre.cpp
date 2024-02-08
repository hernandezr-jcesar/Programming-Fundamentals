/* Programa que pida el nombre del usuario
version 1
Fecha 14 de Octubre de 2019
Programador: Julio Cesar Hernandez Reyes
Grupo: 1CM55
Fecha: 14 de Octubre del 2019
*/
#include <iostream>
#include<string.h>
using namespace std;
string nombre;
main()
{
    cout<<"Programa del cual no puedes salir si no pones correctamente el nombre del usuario"<<endl;
    do{
        cout << "Introduzca su nombre: ";
        cin >> nombre;
        if (nombre != "cesar"){
        	cout << "No puedes salir "<<nombre<<"."<< endl;
		}
	}while(nombre != "cesar");
		cout<<"Nombre correcto!!!"<<endl;
   	 	cout<<"Fin del programa"<<endl;	
		system("pause");
		system("cls");
    return 0;
}
