#include <stdio.h>
#define P 200
int main()
{
  const int kg=100;
  int a, n, psi, psc, pri, sob;
  char tat;
  printf("Transportes\n");
  printf("Tipo animal: ");
  scanf("%c", &tat);
  if(tat=='T' || tat=='t' || tat=='C' || tat=='c' || tat=='J' || tat=='j')
  {
    printf("# animales: "); 
    scanf("%d", &n);
    if(n<=0)
      printf("ERROR EN CANTIDAD\n");
    else 
    {
      if(tat=='T' || tat=='t')
      {
        a=140;
        printf("TORTUGAS\n");
      }
      if(tat=='C' || tat=='c')
      {
        a=210;
        printf("CEBRAS\n");
      }
      if(tat=='J' || tat=='j')
      {
        a=500;
        printf("JIRAFAS\n");
      }
      psi=a*n; 
      psc=psi/kg;
      pri=psc*P;
      sob=psi%kg;
      if(sob>50)
        pri+=P;
      printf("Peso kg: %d\n", psi);
      printf("A pagar: %d\n", pri);
    }
  }
  else 
    printf("NO CORRESPONDE TIPO DE ANIMAL\n");
  printf("Velázquez Ramírez Carlos Raúl\n");
}
