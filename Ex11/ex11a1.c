#include <stdio.h>

double c2f(double);

int main( ){
  int c;
  double f;

  printf("摂氏(°C)    華氏（°F)\n");

  for(c=0;c<=100;c+=5){

    f =c2f((double)c);

    printf("    %3d	     %6.2f\n",c,f);
  }
  return 0;
}

double c2f(double c)
{
  double f;
  f = 9*c/5 + 32;
  return f ;
}
