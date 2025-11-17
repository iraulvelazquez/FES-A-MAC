#include <stdio.h>
int main()
{
  int ren, esp, as; 
  printf("*** T R I Á N G U L O S ***\n\n");
  for(ren=5; ren>=1; --ren)
  {
    for(as=ren; as<=5; ++as)
    {
      putchar('*');
    }
    putchar('\n');
  }
  putchar('\n');
  for(ren=5; ren>=1; --ren)
  {
    for(as=ren; as>=1; --as)
    {
      putchar('*');
    }
    putchar('\n');
  }
  putchar('\n');
  for(ren=5; ren>=1; --ren)
  {
    for(esp=ren; esp>1; --esp) 
    {
      putchar(' ');
    }
    for(as=ren; as<=5; ++as) 
    {
      putchar('*');
    }
    putchar('\n');
  }
  putchar('\n');
  for(ren=5; ren>=1; --ren)
  {
    for(esp=ren; esp<5; ++esp) 
    {
      putchar(' ');
    }
    for(as=ren; as>=1; --as) 
    {
      putchar('*');
    }
    putchar('\n');
  }
  printf("\nVelázquez Ramírez Carlos Raúl\n\n");
}
