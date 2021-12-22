/*****************************************
 * lec13-6d.c
 *
 * 二進→１０進変換 その３ 参考版
 * （文字/文字列/関数への配列引数などprog1の
 *   テクニックを使用した。３２ビットまで対応）
 *
 *****************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

unsigned int b2d_char(char[]);

int main()
{
  char str[50];
  unsigned int result;

  while(1){
    printf("３２桁以下の２進数を入力 ==> ");
    if(gets(str) == NULL) exit(0);
    /* getsはセキュリティホールになるので、注意が必要。
      また、fgetsを使うと、改行コードも読み込まれてしまう
      場合があるので、やはり注意が必要 */
    /* fgets使用版（２行目で改行を取り除いている） 
    if((fgets(str,49,stdin)) ==NULL) exit(0);
    if (str[strlen(str)-1]=='\n') str[strlen(str)-1]='\0';
    */
    result = b2d_char(str);
    printf("２進 : %s -> １０進 : %u\n",str,result);
  }
  return 0;
}

unsigned int b2d_char(char data[])
{
  int i , k = 1 , m = 1 ;
  unsigned int total = 0;

  if (strlen(data) > 32){
    printf("変換出来る範囲を越えています\n");
    exit(4);
  }
  for(i = strlen(data) ; i > 0 ; i--){
    switch (data[i - 1]){
    case '0':
      break;
    case '1':
      total += m;
      break;
    default:
      printf("データが０か１ではありません\n");
      exit(8);
    }
    k *= 10;
    m *= 2;
  }
  return total;
}
