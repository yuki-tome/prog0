#include <stdio.h>
int main ( ){
  int score[7];
  int i;

  printf("7人分の評点を入力して下さい。\n");
 for(i=0;i<=6;i++){
    scanf("%d",&score[i]);
  }

  for(i=0;i<=6;i++){
    printf("%d:  %-3d  ",i+1,score[i]);
    
    if (score[i]>=80)
    printf("A\n");
    else if(score[i]>=65)
      printf("B\n");
    else if (score[i]>=50)
      printf("C\n");
    else if(score[i]>=35)
      printf("D\n");
    else 
      printf("F\n");
  }

  return 0;
}

  

  
