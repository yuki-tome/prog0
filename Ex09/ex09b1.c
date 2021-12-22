#include <stdio.h>

int main ( )
{
  int i,j,a,b,c;
  int data[4][5]={{1,2,3,4,5},{7,8,9,10,11},{12,13,14,15,16},{17,18,19,20,21}};

  printf("行要素と列要素のどちらを表示したいか選択して下さい\n(行要素:0, 列要素:1) ");

  scanf("%d",&a);

  if(a==1){
    printf("表示したい列番号を入力して下さい :");
    scanf("%d",&b);
    for(i=0;i<4;i++){
      printf("%d\n",data[i][b]);
    }
  }

  else if(a==0){
    printf("表示したい行番号を入力して下さい :");
    scanf("%d",&c);
    for(i=0;i<5;i++){
      printf(" %d",data[c][i]);
    }
    printf("\n");
  }
  else
    for (i=0; i<4 ; i++){
    for (j=0; j<5 ; j++){
      printf("%3d",data[i][j]);
    }
    printf("\n");
  }

  return 0;
}
