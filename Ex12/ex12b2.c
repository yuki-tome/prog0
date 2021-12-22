#include <stdio.h>
#include <math.h>
#define EXP 1.0e-6

double f(double);
double df(double);

int main()
{
  double x = 0,fx,dfx;

  printf("x(k-1)\t\tfx\t\tdfx\t\tx(k)\t\tf(x)\n");

  while((fx = f(x)) > EXP)
  {
    dfx = df(x);
    printf("%f\t%f\t%f",x,f(x),df(x));

    x = x - fx/dfx;

    printf("\t%f\t%7.6f\n",x,f(x));
  }
  printf("x = %f",x);
  return 0;
}

double f(double x)
{
  double fx;
  fx = exp(x) - 4*x;
  return fx;
}

double df(double x)
{
  double dfx;
  dfx = exp(x) - 4;
  return dfx;
}
