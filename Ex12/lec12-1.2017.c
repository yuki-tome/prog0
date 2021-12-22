#include <stdio.h>

double nijou(double);

int main()
{
  double a2, a4, a8;
  a2 = nijou(3.0);
  a4 = nijou(a2);
  a8 = nijou(a2*a2);
  printf("a2:%f a4:%f a8:%f\n", a2, a4, a8);
  return 0;
}

double nijou(double x)
{
  double y;
  y = x * x;
  return y ;
}
