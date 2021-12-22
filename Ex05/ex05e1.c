#include <stdio.h>
int main(){
  int k=1;
  double sum,n;

  while(k%3!=0||k==0){
    printf("数字を入力してください :  ");
    scanf("%lf",&n);
    sum+=n;
    printf("合計 %f\n",sum);
    k=sum;
    k=k/10;
    k=k%10;
  }
  printf("条件成立！\n");
  return 0;
}
  
