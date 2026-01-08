#include <stdio.h>
int main() 
{
  int ren, as, esp; 
  float z=0;
  printf("*** T R A P E C I O S ***\n\n");
  for(ren=5; ren>=1; --ren)
  {
    for(esp=ren; esp<5; ++esp) 
    {
      putchar(' ');
    }
    for(as=1; as<=5; ++as)
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
    for(as=1; as<=5; ++as)
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
    for(as=ren; as<5; ++as)
    {
      putchar('*');
    }
    putchar('\n');
  }
  for(ren=5; ren>=1; --ren)
  {
    for(esp=ren; esp<=5; ++esp)
    {
      putchar(' ');
    }
    for(as=ren; as>=2; --as)
    {
      putchar('*');
    }
    for(as=ren; as>2; --as)
    {
      putchar('*');
    }
    putchar('\n');
  }
  printf("*** T R A P E C I O S  Y  S E R I E S ***\n\n");
  printf("Suma 111 empezando en 111\n\n");
  for(ren=5; ren>=1; --ren)
  {
    for(esp=ren; esp<5; ++esp) 
    {
      printf("    ");
    }
    for(as=1; as<=5; ++as)
    {
      z+=111;
      printf("%.0f ", z);
    }
    putchar('\n');
  }
  putchar('\n');
  z=0;
  printf("Suma 0.01 empezando en 0.01\n\n");
  for(ren=5; ren>=1; --ren)
  {
    for(esp=ren; esp>1; --esp) 
    {
      printf("   ");
    }
    for(as=1; as<=5; ++as)
    {
      z+=0.01;
      printf("%.2f ", z);
    }
    putchar('\n');
  }
  putchar('\n');
  z=3;
  printf("Resta 0.1 empezando en 2.9 y suma 0.1 de vuelta\n\n");
  for(ren=5; ren>=1; --ren)
  {
    for(esp=ren; esp>1; --esp)
    {
      printf("    ");
    }
    for(as=ren; as<=5; ++as)
    {
      z-=0.1;
      printf("%.1f ", z);
    }
    for(as=ren; as<5; ++as)
    {
      z-=0.1;
      printf("%.1f ", z);
    }
    putchar('\n');
  }
  for(ren=5; ren>=1; --ren)
  {
    for(esp=ren; esp<=5; ++esp)
    {
      printf("    ");
    }
    for(as=ren; as>=2; --as)
    {
      z+=0.1;
      printf("%.1f ", z);
    }
    for(as=ren; as>2; --as)
    {
      z+=0.1;
      printf("%.1f ", z);
    }
    putchar('\n');
  }
  printf("Velázquez Ramírez Carlos Raúl\n\n");
}
