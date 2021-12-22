/*****************************************
 * lec13-7c.c 改良版
 *
 * 10進→2進変換
 *
 *****************************************/
#include<stdio.h>

int main()
{
  unsigned int data;
  int i;
  
  printf("１０進数を入力 ==> ");
  scanf("%u",&data);

  for(i = 0; i < 32; i++){
    printf("%1d",(data >> (31 - i)) & 1);
  }
  printf("\n");
  return 0;
}
