#include <stdio.h>

int main ( )
{
  #define SIZE 10
  int matrix[SIZE][SIZE];
  int t_matrix[SIZE][SIZE];
  int i,j,n,m;

  scanf("%d %d",&n,&m);
  printf("行数%d,列数%d\n",n,m);

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf(" %2d ",&matrix[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      y_matrix[j][i]=matrix[i][j];
    }
  }

  printf("転置行数：％d、列数：％d\n");
  

  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf(" %2d ",&t_matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
