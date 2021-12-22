#include <stdio.h>
#define INIT_CREDIT 100000

int payment(double rate,int activity);
int fee(int payment_yen);

int main(){
  int balance = INIT_CREDIT;
  int activity,debit_yen,payment_yen,fee_yen;
  double rate =0.0;

  while (1){
    printf("\nBalance: %d yen\n",balance);
    printf("Input payment(- local currency) or income(+ yen) >> ");
    scanf("%d",&activity);
    if (activity == 0){
      break;
    } else if (activity > 0) {
      debit_yen = activity;
    } else {
      printf("Input exchange rate (yen/local) >> ");
      scanf("%lf", &rate);
      payment_yen = payment(rate,-activity);
      fee_yen = fee(payment_yen);
      debit_yen = - (payment_yen + fee_yen);
      printf("fee: %d yen\n",fee_yen);
    }
    balance = balance + debit_yen;
  }
  printf("\nBalance: %d yen\n",balance);

  return 0;
}

int payment(double rate,int activity)
{
  int payment_yen;
  payment_yen = rate*activity;
  return payment_yen;
}
int fee(int payment_yen)
{
  int fee_yen;

  if(payment_yen<1000/3){
    fee_yen = 10;
  }
  else{
  fee_yen = payment_yen*0.03;
  fee_yen = fee_yen / 10;
  fee_yen = fee_yen * 10;
  }
  return fee_yen;
}

    


  
