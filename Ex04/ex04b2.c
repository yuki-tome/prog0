#include <stdio.h>
int main ( ){
  double ondo;
  int situdo;
  printf("温度と湿度を入力して下さい ");
  scanf("%lf%d",&ondo,&situdo);
  if(ondo < 20 ) printf("温度:%.2f度 湿度:%d%%\n寒い\n",ondo,situdo);
  else if(20 <= ondo && ondo < 28 && situdo < 60) printf("温度:%.2f度 湿度:%d%%\n快適\n",ondo,situdo);
  else if(20 <= ondo && situdo >= 60) printf("温度:%.2f度 湿度:%d%%\n蒸し暑い\n",ondo,situdo);
  else if(28 <= ondo && situdo < 60) printf("温度:%.2f度 湿度:%d%%\n暑い\n",ondo,situdo);
  return 0;
}
