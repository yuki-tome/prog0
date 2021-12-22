#include <stdio.h>
#define GYOU 10
#define RETSU 10

int main ( )
{
  int b,i,j,gyo[GYOU][RETSU];
  int n,m;

  printf("行列の大きさを入力して下さい（最大10 x 10):");

  scanf("%d%d",&n,&m);

  printf("%d x %d行列を整数値で入力してください\n",n,m);

    for (i=0; i<n ; i++){
      for (j=0; j<m ; j++){
      scanf("%d",&gyo[i][j]);
    }
   
  }

    printf("行列を何倍にしますか？");

    scanf("%d",&b);

 
    for (i=0; i<n ; i++){
      for (j=0; j<m ; j++){
	printf("%2d ",b*gyo[i][j]);
    }
    printf("\n");
  }
      
  return 0;
}
