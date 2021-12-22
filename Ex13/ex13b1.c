#include <stdio.h>
#include <stdlib.h>

#define STSIZE 100

void push(int);
int pop(void);

int stack[STSIZE];
int top = 0;

int main(){
  int data, status, i;
  int suuji;

  while (1) {
    printf("挿入:1, 取り出し:2, 検索:3 >> ");
    status = scanf("%d", &data);
    if (status != 1) break;
    if (data == 2){
      printf(" データ: %d\n", pop() );
    }
    else if (data == 1){
      scanf("%d",&suuji);
      push(suuji);
    }
    else if(data==3){
      scanf("%d",&suuji);
      for(i=0;i<top;i++){
	if(stack[i]==suuji){
	  printf(" %d はスタック[%d]に存在します\n",suuji,i);
	  break;
	}
      }
      if(i==top) printf(" %d はスタックにありません\n",suuji);
    }
    else break;
  }
  return 0;
}

void push(int num){
  int i;
  if (top == STSIZE) {
    /* スタックがいっぱいの場合、エラー処理を行う */
    printf("Stack overflow!\n");
    exit (2);
  }
  stack[top] = num;
  printf("[Stack] ");
  for(i=0;i<=top;i++){
    printf("%d ",stack[i]);
  }
  printf("\n");
  top++;
}
int pop(void){
  if (top == 0) {
    /* スタックが空の場合、エラー処理を行う */
    printf("Stack is empty!\n");
    exit (3);
  }
  top--;
  return stack[top];
}
