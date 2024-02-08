#include<iostream>
using namespace std;
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
	int valorbus, bandera, local, cont;
	char res;
	res='s';
	//vector={11,9,27,32,52,46,0,94,88,26}
	while(res=='s'
	{
		bandera=0;
		local=inicio;
		printf("\n \n La lista que tiene guardada es:\n ");
		for(cont=inicio;cont<fin;cont++)
		{
			printf("%d",vector[cont]);
		}
		printf("%d",vector[fn]);
		//inicio de busqueda
		printf("\n Dame el valor que deseas buscar en el vector \n");
		scanf("%d",&valorbus);
		cout<<"\n Tu deseas buscar el valor"<<valorbus<<endl;
		//iteraciopn de la busqueda del valor
		while((local<=fin)&&bandera==0)
		{
			if(vector[local]==valorbus)
			{
				bandera==1;	
			}
			else
			{
				++local;
			}
			if(bandera==1)
			{
				cout<<"Lo encontre, lo que buscabas "<<valorbus<<"en el lugar"<<(local+1)<<endl;
			}
			else
			{
				cout<<"\n \t NO se encontro el valor buscado en esta lista"<<valorbus<<endl;
			}
			cout<<"\n \t Deseas buscar otro numero?";
			cin>>res;
		}
		cout<<"Este programa fue hecho por: "
		encabezado();
		cout<<"Adios";
		system("pause");	
	}
}
