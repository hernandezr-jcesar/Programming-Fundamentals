#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int hora= time(NULL);
	int li=65,ls=90;
	int cnt;
	int v = 5, v2=10;
	FILE*a=NULL;
	int n;
	char c;
	int contador;
	if(!(a=fopen("sr.txt","at+"))){
		printf("\nerror");
		system("pause");
		exit(-1);
	}
	printf("Escriba un simbolo:");
	scanf("%c",&c);
	for(cnt=0;cnt < v;cnt++){
		for(contador=0;contador < v2;contador++)
				fprintf(a,"%c",c);
		fprintf(a, "\n");
}
fclose(a);
printf("\n");
system("pause");
return 0;
}
	
