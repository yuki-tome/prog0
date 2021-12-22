#include <stdio.h>
int main()
{
  double a,b;

  printf("長方形の、縦の辺の長さと横の辺の長さを, cm で入力してください ：");
  scanf("%lf%lf",&a,&b);
  printf("長方形の周の長さは,%4.1f cmです。\n",2*(a+b));

  return 0;
    }
