#include <stdio.h>
int main ()
{
  int a,b,c,d,e,f,g,h,i,j,sum;
  double ave;
  printf("国語の点数と重みを入力してください : ");
  scanf("%d%d",&a,&b);
  printf("数学の点数と重みを入力してください : ");
  scanf("%d%d",&c,&d);
  printf("英語の点数と重みを入力してください : ");
  scanf("%d%d",&e,&f);
  printf("理科の点数と重みを入力してください : ");
  scanf("%d%d",&g,&h);
  printf("社会の点数と重みを入力してください : ");
  scanf("%d%d",&i,&j);
  sum=a*b+c*d+e*f+g*h+i*j;
  ave=((double)sum)/(b+d+f+h+j);
  printf("5教科の重み付き合計点は%d点で、重み付き平均点は%9.6f点です。\n",sum,ave);
  return 0;
}
    
  
