/* 奇数と偶数を判別するプログラム */
/* 作成者：當銘 雄紀 */
/* 作成日：6月21日*/
#include <stdio.h>
int main()
{ 
 int a;
 printf("整数を入力してください ");
 scanf("%d", &a);
 if(a%2==0) printf("%dは偶数です\n",a);
 else if(a%2==1) printf("%dは奇数です\n",a);
 return 0;   
}
