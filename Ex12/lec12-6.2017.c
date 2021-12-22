#include <stdio.h>  
int main()
{
  int data[100],result,i,n;
  for(i = 0 ; i < 100 ; i++){   
    result = scanf("%d",&data[i]); /* data 入力 */
    if (result == 1) continue;     /* scanf 成功 */
    else if (result == EOF) break; /* 入力終了 */
    else{ /* scanf 失敗 */
      printf("Input data error!\n");
      break;
    }
  }
  n = i; /* i に正常に入力された個数が入っている */
  for(i = 0 ; i < n ; i++){
    printf("data[%2d] : %d\n", i, data[i]); /* データ出力 */
  }
  return 0;
}
