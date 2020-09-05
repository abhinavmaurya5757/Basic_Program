#include<stdio.h>
int main()
{
  int n,sum=0,r,x;
  printf("Enter a number");
  scanf("%d",&n);
  
  while(n>0)
  {
      r=n%10;
      n=n/10;
      x=x*10+r;
  }
  printf("Reverse of the number is %d ",x);
  return 0;
}

