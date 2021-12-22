/*****************************************
 * lec12-2.c
 *
 * 引数から仮引数への値の受け渡しの様子を見る
 * void型引数,void型返り値の関数例
 *
 *****************************************/
#include <stdio.h>

int  test(int);
void separator(void);

int main()
{
  int x = 4, y;
  printf("main: 関数を呼ぶ前のx   %d\n",x);
  separator();
  y = test(x);
  separator();
  printf("main: 関数を呼んだ後のx %d <- xの値は変らない\n",x);
  return 0;
}

int test(int i)
{
  printf("test: 呼ばれた直後のi   %d <- xの値と同じ\n",i);
  i *= 3;
  printf("test: 計算後のi         %d\n",i);
  return i ;
}

/* この関数は罫線を表示するだけの関数 */
void separator(void)
{
  printf("--------------------------------------------\n");
  return;
}
