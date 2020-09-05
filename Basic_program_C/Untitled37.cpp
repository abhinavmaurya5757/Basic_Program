#include<stdio.h>
int main()
{
  int n,sum=0,r,x,a;
  printf("Enter a number");
  scanf("%d",&n);
  a=n;
  while(n>0)
  {
      r=n%10;
      n=n/10;
      x=x*10+r;
  }
if(x==a)
  printf("%d is a pallindrome",x);
else
printf("%d is not a pallindrome",x);
  
  return 0;
}

