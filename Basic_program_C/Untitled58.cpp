#include<stdio.h>
int main() 
	{
   int arr[90],i,max,min;
 
  
   printf("Enter the marks of 90 students:");
   for (i = 0; i <90; i++)
      scanf("%d", &arr[i]);
 	int sum=0,x;  
   for (i = 0; i <90; i++)
      sum+=arr[i];
      int avg=sum/90;
      x=0;
   for (i = 0; i < 30; i++) 
   {
      if(arr[i]>avg)
      x=+1;
	
   }
   printf("Students below average:%d and above or equal to average:%d",x,90-x);
 
   return 0;
}
