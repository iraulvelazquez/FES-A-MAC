#include <stdio.h>
int main()
{
  int ren, esp, as, c=5, j=8, k=9; 
  printf("*** T R I Á N G U L O S  Y  S E R I E S***\n\n");
  printf("Suma 4, 3, 2 y 1 respectivo a cada renglón\n\n");
  for(ren=5; ren>=1; --ren)
  {
    for(as=ren; as<=5; ++as)
    {
      printf("%d ", (as*ren)+10);
    }
    putchar('\n');
  }
  printf("\nSuma 5 empezando en 10\n\n");
  for(ren=5; ren>=1; --ren)
  {
    for(as=ren; as>=1; --as)
    {
      c+=5; 
      printf("%d ", c);
    }
    putchar('\n');
  }
  printf("\nPares empezando en 10\n\n");
  for(ren=5; ren>=1; --ren)
  {
    for(esp=ren; esp>1; --esp) 
    {
      printf("   ");
    }
    for(as=ren; as<=5; ++as) 
    {
      j+=2;
      printf("%d ", j);
    }
    putchar('\n');
  }
  printf("\nImpares empezando en 11\n\n");
  for(ren=5; ren>=1; --ren)
  {
    for(esp=ren; esp<5; ++esp) 
    {
      printf("   ");
    }
    for(as=ren; as>=1; --as) 
    {
      k+=2;
      printf("%d ", k);
    }
    putchar('\n');
  }
  printf("\nVelázquez Ramírez Carlos Raúl\n\n");
}
