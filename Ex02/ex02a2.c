#include <stdio.h>
int main ( )
{
  int a,b,c,d,e;
  printf("縦の長さを入力してください ");
  scanf( "%d",&a);
  printf("横の長さを入力してください ");
  scanf( "%d",&b);
  printf("高さを入力してください ");
  scanf( "%d",&c);
  d = a * b * c;
  printf( "体積:%d\n",d );
  e = 2 * ( a * b + b * c + a * c );
  printf("表面積:%d\n",e);
    return 0;
    }

