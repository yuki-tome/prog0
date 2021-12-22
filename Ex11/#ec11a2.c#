#include <stdio.h>

int section(int h,int m,int s);

int main()
{
  int h,m,s;
  int f,f2;
  double f3;


  
  printf("はじめの時、分、秒を入力してください:");
  scanf("%d %d %d",&h,&m,&s);

  f=section(h,m,s);
  printf("おわりの時、分、秒を入力してください:");
  scanf("%d %d %d",&h,&m,&s);

  f2=section(h,m,s);

  f3=(f2-f)/60.0/60.0;


  printf("それぞれ0時から数えて %d 秒と %d 秒なので,\n時間差は %d 秒(%.3f 時間)です。",f,f2,f2-f,f3);

  return 0;
}


int section(int h,int m,int s)
{
  int f;
  f=h*3600+m*60+s;

  return  f;
}

  
