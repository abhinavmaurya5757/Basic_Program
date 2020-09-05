#include<stdio.h>
 
int main() 
	{
   int arr[30],i,max,min;
 
  
   printf("\nEnter the temperatures recorded in the month of September : ");
   for (i = 0; i < 30; i++)
      scanf("%d", &arr[i]);
 	min=arr[0];
 	max=arr[0];   
   for (i = 0; i < 30; i++) 
   {
      if(arr[i]>max)
	{
		max=arr[i];
	}
	  if(arr[i]<min)
	{
		min=arr[i];
	}
   }
   printf("The highest and lowest temperature recorded in the month of September is %d and %d respectively",max,min);
 
   return (0);
}
