#include <stdio.h>
#include<stdlib.h>

#define SIZE 20

void histgramfunc(int);


int main()
{
  int hist[SIZE];
  int a,i;

  for(i=0;i<SIZE;i++){
    scanf("%d",&hist[i]);
    if (hist[i]<0) break;
  }

  a=i;
  for (i=0;i<a;i++){
    histgramfunc(hist[i]);
  }
  return 0;
}
void histgramfunc(int n)
{
  int i;

  if(n<0||n>60){
    printf("illegal value\n");
    exit(8);
  }
  printf("[%2d]:",n);
  for(i=0;i<n;i++)
    printf("*");
  printf("\n");
}
    
