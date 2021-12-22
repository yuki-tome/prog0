#include <stdio.h>

void a(void);
void b(void);

int main()
{
  int i = 1;

  a();
  b();
  return 0;
}

void a(void)
{
  int i = 2;
  printf("i : %d\n",i);
}

void b(void)
{
  int i = 3;
  printf("i : %d\n",i);
}
