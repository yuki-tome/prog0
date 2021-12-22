#include <stdio.h>
int main ( )
{
  int array[10];
  int i;

  for(i=0;i<10;i++){
    scanf("%d",&array[i]);
    if(array[i]==-1)break;
  }

  for(i=i-1;i>=0;i--){
    printf("%d  ",array[i]);
  }
  printf("\n");
  return 0;
}
