#include <stdio.h>
int main ( )
{
  int sum,i,j,k ;
  int kai,bunsi,aaa,n,r;

  kai = 1;
  bunsi = 1;
  aaa = 1;

  printf("nとrを入力してください：");
  scanf("%d%d",&n,&r);

  for(i=n,j=r,k=n-r;i>0,j>0,k>0;i--,j--,k--){
    
      kai = kai * i ;
    bunsi = bunsi * j ;
    aaa = aaa * k ;
  }

  sum = kai / bunsi / aaa;

  printf("%dC%d = %d\n",n,r,sum);

  return 0;
}
