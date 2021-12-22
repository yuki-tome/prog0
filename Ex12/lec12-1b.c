/*****************************************
 * lec13-1b.c
 *
 * ニュートン法による二乗根の計算
 *
 * バリエーション１ 代入と比較を別にした
 * 関数を呼ぶ場所が２個になったが比較は見やすい
 *
 *****************************************/
#include <stdio.h>
#define EPS 1.0e-6

double f(double, double);
double df(double);

int main()
{
  double a, x, fx, dfx;
  printf("input a number:");
  scanf("%lf",&a);
  x = a;
  printf("x\t\tfx\t\tdfx\n");
  fx = f(x,a);  /* calculate first fx */
  while(fx > EPS){
    dfx = df(x);
    x = x - fx/dfx;
    printf("%f\t%f\t%f\n",x,fx,dfx);
    fx =  f(x,a);
  }
  printf("ans(%f) = %f\n",a,x);
  return 0;
}

double f(double x, double a)
{
  double fx;
  fx = x*x - a;
  return fx;
}

double df(double x)
{
  double dfx;
  dfx = 2.0*x;
  return dfx;
}
