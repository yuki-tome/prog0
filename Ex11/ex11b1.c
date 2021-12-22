#include <stdio.h>

int gcd(int x,int y);

int main()
{
  int x,y,z;
  int f;

  while(1){
    printf("Input two numberes\n");
    scanf("%d %d",&x,&y);
    if(x<0 || y<0) break;
    
    f=gcd(x,y);

    printf("GCD of %d and %d is %d.\n",x,y,f);
  }
  while(1){
    printf("Input positive numbers again!\nInput two numberes\n");
    scanf("%d %d",&x,&y);
    if( x==0 || y==0 ) break;
    
    f=gcd(x,y);
    printf("GCD of %d and %d is %d.\n",x,y,f);
  }

  return 0;
}

int gcd(int x,int y)
{
  int f,z;

  if(x>y){
    while(1){
    z=x%y;
    if(z==0) break;
    x=y;
    y=z;
    }
    f=y;
  }
  else{
    while(1){
    z=y%x;
    if(z==0) break;
    y=x;
    x=z;
    }
    f=x;
  }

  return f;
}
  
    
    
    
    
    
    
  
