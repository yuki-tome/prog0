#include <stdio.h>
int main()
{
  int n;
  
  printf("0でない自然数nを入力して下さい\n");
  scanf("%d", &n);
  
  while ( n != 1) {
    if (0==n%2){
      n=n/2;
      printf("n = %d\n",n );}
    else {
      n=n*3+1;
      printf("n = %d\n",n);}
		  
  }

  printf("終了\n");
  return 0;   
}
