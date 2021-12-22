/*****************************************
 * lec13-3.c
 *
 * ある数の桁数を計算する
 *
 *****************************************/
#include<stdio.h>

int digits(int);

int main()
{
  int i, j;

  scanf("%d",&i);
  j = digits(i);
  printf("%d の桁数は %d です\n",i, j);
  return 0;
}

int digits(int x)
{
  int keta = 1 , y = 10;
  
  while((x / y) > 0){
    y *= 10;
    keta++;
  }
  return keta;
}
