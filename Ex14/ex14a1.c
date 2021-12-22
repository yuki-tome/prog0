#include <stdio.h>
#define NUM 12

int bmi_hantei(double);

int main()
{
  int i,j;
  int count ,per;
  double data[NUM][2];
  double bmi[NUM];
  double rate;
  count=0;

  printf("身長(cm)と体重(kg)を空白で区切って 12 人分入力してください。\n");
  for(i=0;i<NUM;i++){
    for(j=0;j< 2;j++){
      scanf("%lf",&data[i][j]);
    }
    data[i][0]=data[i][0]/100.0;
    bmi[i]=data[i][1]/(data[i][0]*data[i][0]);
  }
  printf("\n");
  printf("               BMI     状態\n");
  for(i=0;i<NUM;i++){
    printf("%2d 人目 %3.1f ",i+1,bmi[i]);
    switch(bmi_hantei(bmi[i])){
    case 0:
    printf("正常\n");
    count++;
    break;
    case -1:
    printf("やせている\n");
    break;
    case 1:
    printf("太っている\n");
    break;
    }
  }
  rate =(double)count/NUM;

  per=(int)(rate*100.0+0.5);
  printf("\n");
  printf("BMI 値が正常な人の割合は%dパーセントです。\n",per);

  return 0;
}

int bmi_hantei(double bmi)
{
  int flag=0;
  if(bmi<18.5)
    flag=-1;
  else if(bmi>=25)
    flag=1;
  return flag;
}
  
    
  
    
  
