/*****************************************
 * lec13-6c.c
 *
 * 二進→１０進変換 その２b
 * （関数はmainから呼ばれるとは限らない）
 *
 * 0/1以外の数字がある時関数b2dは戻り値と
 * して-1を返す。mainはその場合はcontinue
 * し、再度入力する。
 *
 * 又入力データのチェックを更に強化した。
 * （入力がEOFの時は終了,異常データの場合は
 *   コード８で終了）
 *
 *****************************************/
#include<stdio.h>
#include<stdlib.h>

int digits(int);
int get_1_digit(int, int);
int b2d(int);

int main()
{
  int data, result;
  while(1){
    /* データ読み込みとチェック */
    printf("８桁以下の２進数を入力 ==> ");
    result = scanf("%d",&data);
    if (data == 0 || result == EOF){
      printf("\n");
      exit(0);
    }
    if (result != 1){
      printf("入力データが異常です\n");
      exit(8);
    }
    if (data > 11111111 || data < 0){
      printf("変換出来る範囲を越えています\n");
      continue;
    }
    result = b2d(data);
    if (result < 0) continue;
    printf("２進 : %d -> １０進 : %d\n",data,result);
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

int b2d(int x)
{
  int i, n, keta, total = 0, exp = 1;
  keta = digits(x);

  for(i = 1 ; i <= keta ; i++){
    n = get_1_digit(x, i);
    if((n != 0) && (n != 1)){
      printf("データが０か１ではありません\n");
      return -1;
    }
    total += n * exp;
    exp *= 2;
  }
  return total;
}
