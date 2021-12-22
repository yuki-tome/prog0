/*****************************************
 * lec13-6a.c
 *
 * 二進→１０進変換 その１
 * （関数は必ずmainから呼ばれる）
 *
 *****************************************/
#include<stdio.h>
#include<stdlib.h>

int digits(int);
int get_1_digit(int, int);

int main()
{
  int data, keta, i, n, exp, total;
  while(1 == 1){

    /* データ読み込みとチェック */
    printf("８桁以下の２進数を入力 ==> ");
    scanf("%d",&data);
    if (data == 0) exit(0);
    if (data > 11111111 || data < 0){
      printf("変換出来る範囲を越えています\n");
      continue;
    }

    /* 桁数計算 */
    keta = digits(data);

    /* １０進数に変換 */
    total = 0;
    exp = 1;
    for(i = 1 ; i <= keta ; i++){
      n = get_1_digit(data, i);
      /* データチェック ０又は１かどうか */
      if((n != 0) && (n != 1)){
	printf("データが０か１ではありません\n");
	exit(8);
      }
      total += n * exp;
      exp *= 2;
    }
    printf("２進 : %d -> １０進 : %d\n",data,total);
  }
  return 0;
}

int digits(int x)
{
  int keta = 1 , k = 10;

  while((x / k) > 0){
    k *= 10;
    keta++;
  }
  return keta;
}

int get_1_digit(int x, int pos)
{
  int i, j, k = 1;

  for(i = 1 ; i < pos ; i++){
    k *= 10;
  }
  j = x % (k * 10) / k;
  return j;
}
