#include <stdio.h>
int main ( )
{
  int i;
  int guusuu[100];
  int kisuu[100];
  int count1,count2;
  count1=0;
  count2=0;

  while(1){
  scanf("%d",&i);

  if(i==0)break;

  else if(i%2==0){
    guusuu[count1]=i;
    count1++;
  }

  else{
    kisuu[count2]=i;
    count2++;
  }
  }

  if (count1>count2){
    printf("偶数が多い!!\n");
    for( i=0 ; i<count1 ; i++){
      printf("%d  ",guusuu[i]);
    }
    printf("\n");
  }
      
  else if (count1<count2){
    printf("奇数が多い!!\n");
    for( i=0 ; i<count2 ; i++){
      printf("%d  ",kisuu[i]);
    }
    printf("\n");
  }
  
  else{
    printf ("偶数と奇数が同数\n");
    for( i=0 ; i<count2 ; i++){
      printf("%d  ",kisuu[i]);
    }
    printf("\n");
    for( i=0 ; i<count1 ; i++){
      printf("%d  ",guusuu[i]);
    }
    printf ("\n");
  }
  return 0;
}
 
  

  
