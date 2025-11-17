#include <math.h>
#include <stdio.h>
int main()
{
  int n;
  for (n=1; n<=60; n++) 
  {
    double result = pow(2, n);
    double resulta = result + 1;
    printf("2^%d = %.0lf +1= %.0lf Dif: %.0lf\n", n, result, resulta, (resulta - result));
  }
  return 0;
}
