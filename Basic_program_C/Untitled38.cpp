#include<stdio.h>
int main()
{
  int n,r;
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
  		printf("Even");
	  }
	  else
	  printf("Odd");
  }
  return 0;
}

