#include <stdio.h>

int main ( )
{
  int i,j,val[4][3];

  for (i=0; i<3 ; i++){
    for (j=0; j<4 ; j++){
      val[j][i]=i+(j*10);
    }
  }
  for (i=0; i<3 ; i++){
    for (j=0; j<4 ; j++){
      printf(" %2d ",val[j][i]);
    }
    printf("\n");
  }
  return 0;
}
