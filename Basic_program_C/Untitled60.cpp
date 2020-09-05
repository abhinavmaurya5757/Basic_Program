#include<stdio.h>
int main() 
	{
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
   int a[n],b[n],c[n];

   printf("Enter the numbers of first and second array:");
   for(i = 0; i <n; i++)
      scanf("%d", &a[i]);
  for (i = 0; i <n; i++)
 	 scanf("%d", &b[i]);
   
   for (i=0;i<n;i++)
      {
      	c[i]=a[i]+b[i];
	  }
	  printf("The summed up final array is equal to:\n");
	  for (i=0;i<n; i++)
      printf("%d", c[i]);
  
   return 0;
}
