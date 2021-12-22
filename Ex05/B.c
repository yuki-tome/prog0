#include <stdio.h>
int main()
{
  int n;
  
  printf("0でない自然数nを入力して下さい\n");
  scanf("%d", &n);
  
  while ( n != 1) {
    //while ( 1) {
    if (n%2==1) {
      n=n/2;
      printf("n = %d\n",n );
      //if (n == 1) break;
    }
    if ( n % 2 != 0) {
      n=n*3+1;
      printf("n = %d\n",n);
      //if (n == 1) break;
    }
		  
  }

  printf("終了\n");
  return 0;   
}
