#include <stdio.h>
int main ( )
{
  int dataset[15]={1,5,12,15,23,30,34,45,50,56,67,70,78,89,90};
  int i;

  printf("添字を入力してください:");

  scanf("%d",&i);

  if(i>0 && i<15)

    printf("dataset[%d]=%d\n",i,dataset[i]);

  else

    printf("範囲外です！\n");

  return 0;
}
