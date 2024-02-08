#include <stdio.h>
int factorial(int a);

int main(){
  int x=0;
  printf("Este programa calcula el factorial de cualquier numero\n"
  "entero positivo usando recursion\n\n");
  printf("Ingrese un numero entero para calcular su factorial:\n");
  scanf("%d",&x);
  printf("El factorial de %d es %d",x, factorial(x));
  return 0;
}

int factorial(int a){
  if(a==0){
  return 1;
  }
  else{
      return a*factorial(a-1);
  }
} 