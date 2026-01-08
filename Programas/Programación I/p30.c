#include <stdio.h>
int main()
{
  char let;
  int sdo, st=0, x=0, A=0, C=0, H=0, er=0, es=0;
  printf("Letra: ");
  scanf("%c", &let);
  while(let=='A' || let=='C' || let=='H' || x<3) // Promedio con mínimo 3 valores válidos
  {
    printf("Sueldo: ");
    scanf("%d", &sdo);
    if(sdo>0)
    {
      if(let=='A')
        ++A;
      if(let=='C')
        ++C;
      if(let=='H')
        ++H;
      if(let!='A' && let!='C' && let!='H')
        ++er;
      printf("Letra: ");
      scanf(" %c", &let);
      fflush(stdin);
      ++x;
      st+=sdo;
      if(let!='A' && let!='C' && let!='H' && x>=3)
        ++er;
    }
    else 
    {
      printf("Dato inválido\n");
      ++es;
    }
  }
  if(x>0)
    printf("Promedio: %d\n", st/x);
  printf("Total As: %d\n", A);
  printf("Total Cs: %d\n", C);
  printf("Total Hs: %d\n", H);
  printf("Total errores letra: %d\n", er);
  printf("Total errores sueldo: %d\n", es);
}
