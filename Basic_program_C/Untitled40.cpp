#include<stdio.h>
int main()
{
  int n,r,e=0,o=0;
  int ar[1000];
  for(r=0;r<1000;r++)
  {
  	scanf("%d",&ar[r]);
  	if(ar[r]==0)
  	{
  		break;
	  }
  
  
  	if(ar[r]%2==0)
  	{
  		e=e+1;
	  }
	  else
	  o=o+1;
  }
  printf("Number of odd and even numbers respectively are %d and %d",o,e);
  return 0;
}

