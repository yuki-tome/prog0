#include <stdio.h>
#include <stdlib.h>

#define STSIZE 100

void push(double);
double pop(void);

int stack[STSIZE];
int top = 0;

int main(){
  int data, status, i;
  double suuji;

  while (1) {
    printf("挿入:[1 データ],  取り出し:[2] >> ");
    status = scanf("%d", &data);
    if (status != 1) break;
    if (data == 2) printf("取り出したデータ: %.3f\n", pop() );
   
    else if (data == 1){
      scanf("%lf",&suuji);
      push(suuji);
    }
  }
  printf("\n");
  return 0;
}

void push(double num){
  if (top == STSIZE) {
    /* スタックがいっぱいの場合、エラー処理を行う */
    printf("Stack overflow!\n");
    exit (2);
  }
  stack[top] = num;
  top++;
}

double pop(void){
  if (top == 0) {
    /* スタックが空の場合、エラー処理を行う */
    printf("Stack is empty!\n");
    exit (3);
  }
  top--;
  return stack[top];
}
