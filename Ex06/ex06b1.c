#include <stdio.h>
 
int main()
{
  int n;
  int i;
 
  printf("整数を入力してください：");
  scanf("%d", &n);

  for(i=1;i<=n;i=i+3){
    printf("%d\n",i);
    }
  return 0;
}
