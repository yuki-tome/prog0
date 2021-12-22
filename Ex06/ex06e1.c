#include <stdio.h>
 
int main()
{
  int n;
  int i;
 
  printf("1から9までの整数を入力してください");
  scanf("%d", &n);
  if(n<10){
    for(i=1;i<=n;i=i++);
    printf("%d%\n",i);
    
    }
  }
  else{printf("入力する数は1から9までです");}
  return 0;
}
