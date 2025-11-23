#include <stdio.h>
#define T 10 
int main() 
{
  int x, hagen[T], par=0, impr=0, nul=0;
  printf("Pares, impares o nulos, con arreglos\n\n"); 
  for(x=0; x<T; ++x) 
  {
    do 
    {
      printf("Dato: "); 
      scanf("%d", &hagen[x]); 
      if(hagen[x]<0) 
        printf("El dato ha de ser positivo o nulo\n\n");
    }while(hagen[x]<0);
    printf("%d\t", hagen[x]);
    if(hagen[x]==0)
    {
      ++nul; 
      printf("Nulo\n\n");
    }
    else 
      if((hagen[x]%2)==0) 
      {
        ++par; 
        printf("Par\n\n");
      }
      else 
      {
        ++impr;
        printf("Impar\n\n");
      }
  }
  printf("Pares: %d\nImpares: %d\nNulos: %d\n\n", par, impr, nul); 
  printf("Velázquez Ramírez Carlos Raúl\n\n");
}
