#include <stdio.h>
void d2btransfunc(int);
int main (){
  int data;
  int i,f;
  while(1){
  printf("２進数に変換したい１０進数の数値を入力してください\n");
  scanf("%d",&data);
  if(data<0)break;
  d2btransfunc(data);
  }
  return 0;
}

void d2btransfunc(int j)
{
  int bin[8],i;
  for(i=0;i<8;i++){
    bin[i]=j%2;
    j/=2;
  }
   for(i = 0; i < 8; i++){
    printf("%d",bin[7-i]);
  }
  printf("\n");
}
