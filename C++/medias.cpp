#include<iostream>
#include<math.h>

using namespace std;

float mediageom(int n);
float media_aritmetica(int n);

int main()
{
	int datos;
	float mediag, mediar;
	char res='s';
	
	while(res=='s')
	{
		system("cls");
		
		cout<<"Dame el numero de datos: ";
		cin>>datos;
		
		mediag=mediageom(datos);
		mediar=media_aritmetica(datos);
		
		cout<<"\nLa media geometrica es: "<<mediag<<endl;
		cout<<"La media aritmetica es: "<<mediar<<endl;
		
		
		cout<<"\nPara repetir el proceso... Si(S) No(Cualquier otra cosa): ";
		cin>>res;
	}
	
	system("pause");
	
	return 0;
}

float mediageom(int n)
{
	int cont1, lim;
	float prod, dato, medgc, pot;
	
	prod = 1;
	dato = 0;
	lim = n;
	
	cout<<"\n\nDatos para la media geometrica."<<endl;
	
	for(cont1=1; cont1<=lim; cont1++)
	{
		cout<<"Dime el dato "<<cont1<<": ";
		cin>>dato;
		prod=prod*dato;
		dato=0;
	}
	
	pot=1.0/lim;
	medgc=pow(prod,pot);
	
	return  medgc;
}

float media_aritmetica(int n)
{	
	int cont1, lim=n;
	float sum=0, dato=0, med=0, pot=0;
	
	cout<<"\n\nDatos para la media aritmetica."<<endl;
	
	for(cont1=1; cont1<=lim; cont1++)
	{
		cout<<"Dime el dato "<<cont1<<": ";
		cin>>dato;
		sum=sum+dato;
		dato=0;
	}
	
	med=sum/lim;
	
	return  med;
}
