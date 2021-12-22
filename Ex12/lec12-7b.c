/*****************************************
 * lec13-7b.c 改良版
 *
 * 10進→2進変換
 *
 *****************************************/
#include<stdio.h>

int main()
{
  unsigned int data;
  int bin[32], i;
  
  printf("１０進数を入力 ==> ");
  scanf("%u",&data);

  for(i = 0; i < 32; i++){
    if(data == 0) {
      bin[31 - i] = 0;
      continue;
    }
    bin[31 - i] = data % 2;
    data /= 2;
  }

  for(i = 0; i < 32; i++){
    printf("%1d",bin[i]);
  }
  printf("\n");
  return 0;
}
