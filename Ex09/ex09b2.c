#include <stdio.h>
#define GYOU 10
#define RETSU 10

int main ( )
{
  int b,i,j,gyo[GYOU][RETSU];
  int n,m;

  printf("行数と列数を入力してください");

  scanf("%d%d",&n,&m);

  if(n>10||m>10){
    printf("行数または列数が配列のサイズを超えています\n");
  }

  else{
    printf("%d x %d行列を整数値で入力してください\n",n,m);

    for (i=0; i<n ; i++){
      for (j=0; j<m ; j++){
      scanf("%d",&gyo[i][j]);
    }
    }
    printf("入力行列：\n");
    for (i=0; i<n ; i++){
      for (j=0; j<m ; j++){
      printf(" %d",gyo[i][j]);
    }
      printf("\n");
    }
    printf("転置行列：\n");
     for (i=0; i<m ; i++){
      for (j=0; j<n ; j++){
      printf(" %d",gyo[j][i]);
    }
      printf("\n");
    }
  }
     return 0;
}

 
