#include <stdio.h>

int main() {

  int n, m, count = 0;

  printf("初期値の入力 : ");
  scanf("%d", &n);
  while( n > 0) {
    count++;
    m = n % 2 ;
    n = n / 2 ;
    
    printf("%d回目ループ 商 %d  あまり %d\n", count, n, m);
  }

  return 0;
}
