/*****************************************
 * lec13-4.c
 *
 * ある数のある桁の数を計算する
 *
 *****************************************/
#include<stdio.h>

int get_1_digit(int, int);

int main()
{
  int i, j = 2, result;

  scanf("%d",&i);
  result = get_1_digit(i, j);
  printf("%d の %d 桁目は %d です\n",i,j,result);
  return 0;
}

int get_1_digit(int x, int pos)
{
  int i, j, k = 1;
  
  for(i = 1 ; i < pos ; i++){
    k *= 10;
  }
  j = x % (k * 10) / k;
  return j;
}
