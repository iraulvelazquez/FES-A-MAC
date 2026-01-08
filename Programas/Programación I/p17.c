#include <stdio.h>
int main()
{
  float km, tar, pag;
  char t;
  printf("Caseta de cobro\n");
  printf("Tipo: ");
  scanf("%c", &t);
  printf("Km: ");
  scanf("%f", &km);
  if (t=='T' || t=='t' || t=='M' || t=='m' || t=='A' || t=='a')
    if (km>=1)
    {
      if (km<=10)
        tar=50;
      else
        if (km<=35)
          tar=60;
        else 
          if (km<=80)
            tar=70;
          else 
            tar=100;
      pag=km*tar;
      printf("A pagar: %f\n", pag);
      if (t=='T' || t=='t')
        printf ("Tractocamión\n");
      else 
        if (t=='A' || t=='a')
          printf("Auto\n");
        else 
          printf("Moto\n");
    }
    else 
      printf("Km inválido\n");
  else 
    if (km<1)
    {
      printf("Km inválido\n");
      printf("Tipo inválido\n");
    }
    else 
      printf("Tipo inválido\n");
  printf("Velázquez Ramírez Carlos Raúl\n");
}
