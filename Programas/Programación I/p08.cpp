#include <stdio.h>
int main()
{
  char hagen;
  printf("Tipo: ");
  scanf("%c", &hagen);
  if (hagen=='T' || hagen=='t' || hagen=='C' || hagen=='c' || hagen=='E' || hagen=='e')
    printf("Es correcta.\n");
  else 
    printf("Es incorrecta.\n");
  printf("Velázquez Ramírez Carlos Raúl\n");
}
