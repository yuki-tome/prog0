#include <stdio.h>
#include <stdlib.h>

#define QSIZE 5

void enqueue(double);
double dequeue(void);

double queue[QSIZE];
int head = 0,tail =0;

int main(){
  int data, status, i;
  double suuji;

  while (1) {
    printf("挿入:1, 取り出し:2, 表示:3, 終了:0>> ");
    status = scanf("%d", &data);
    if (status != 1) break;
    if (data == 2){
      printf(" データ: %.3f\n", dequeue() );
    }
    else if (data == 1){
      scanf("%lf",&suuji);
      enqueue(suuji);
    }
    else if(data==3){
      printf(" [Queue] ");
      for(i=head ; i<tail ; i++){
	printf("%.3f ",queue[i]);
      }
      printf("\n");
    }
    else if(data==0)break;
  }
  return 0;
}

void enqueue(double num){
  int next = (tail+1);
  int ryou;
  ryou =tail-head+1;
    if (ryou >= QSIZE) {
    /* キューがいっぱいの場合、エラー処理を行う */
    printf("Queue overflow!\n");
    exit (2);
  }
  queue[tail] = num;
  tail = next;
}
double dequeue(void){
  double val;
  if (head == tail) {
    /* キューが空の場合、エラー処理を行う */
    printf("Queue is empty!\n");
    exit (3);
  }
  val =queue[head];
  head =(head+1);
  return val;
}
