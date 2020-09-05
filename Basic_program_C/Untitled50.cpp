#include <stdio.h> 
int main() 
{ 
  int n,i,max=-100000,temp,j;
  printf("Enter the size of the array");
     scanf("%d",&n);
  	int ar[n];
	  for(i=0;i<n;i++)
  	{
  		scanf("%d",&ar[i]);
  	
	  }
	   for(i=0;i<n-1;i++)
	 {
		  for(j=i+1;j<n;j++)
  			{
  			if(ar[i]>ar[j])
  			{
  			temp=ar[i];
  			ar[i]=ar[j];
  			ar[j]=temp;
			  }
  	
		}
	}
	 for(i=0;i<n;i++)
  	{
  		printf("%d ",ar[i]);
  	
	  }
	
   return 0;
}
