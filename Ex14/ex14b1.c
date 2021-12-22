#include <stdio.h>
#define NUM 200

int isPrime(int);
void printf_result(int,int,int);

int main(){
  
  int i,r0,r2,r4,r6;
  
  printf("200 以下の三つ子素数の組は次の通り:\n");
    for(i=5;i<=NUM;i+=2){
      r0=isPrime(i);
      r2=isPrime(i+2);
      r4=isPrime(i+4);
      r6=isPrime(i+6);
      if(r0*r6==1){
	if(r2==1){
	  if(i+6>NUM)break;
	  printf_result(i,i+2,i+6);
	}
	else if (r4==1){
	  if(i+6>NUM)break;
	  printf_result(i,i+4,i+6);
	}
      }
    }
  return 0;
}


void printf_result(int a1,int a2,int a3)
{
  printf("三つ子素数{%4d,%4d,%4d}\n",a1,a2,a3);
}

int isPrime(int b){
  int count=0,sosu,i;
  for(i=1;i<b;i++){
    if(b%i==0)
      count++;
  }
  if(count==1) sosu=1;
  else sosu=0;

  return sosu;
}
  
    
      
      
    
    
    
    
