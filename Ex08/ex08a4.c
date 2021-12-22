#include <stdio.h>

int main ( )
{
  int turu,kame,musi,i,j;
  int count=0;

  for(i=1; i<=18; i++){
    for(j=i; j<=18-i; j++){
      turu=i;
      kame=j;
      musi=20-i-j;

      if(turu*2+kame*4+musi*6==88){
	printf("鶴は%d羽\n亀は%d匹\nてんとう虫は%d匹\n",turu,kame,musi);
      count++;
      }
  }
  }
  if(count==0)
    printf("解なし\n");

  return 0;
}

