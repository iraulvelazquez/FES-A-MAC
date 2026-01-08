#include <stdio.h>
int main()
{
  char z;
  int c, x, t=0, j=0, b=0, e=0;
  printf("Animales\n");
  printf("Cuantos animales: ");
  scanf("%d", &c);
  if(c>0)
  {
    for(x=1; x<=c; ++x)
    {
      printf("Tipo:");
      scanf(" %c", &z);
      fflush(stdin);
      if(z=='T' || z=='t')
        ++t;
      else 
        if(z=='J' || z=='j')
          ++j;
        else 
          if(z=='B' || z=='b')
            ++b;
          else 
            ++e;
    }
    printf("Total tiburones: %d\n", t);
    printf("Total jirafas: %d\n", j);
    printf("Total burros: %d\n", b);
    printf("Total error: %d\n", e);
  }
}
