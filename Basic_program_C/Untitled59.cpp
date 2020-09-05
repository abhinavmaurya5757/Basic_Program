#include<stdio.h>
int main() 
	{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
   int arr[n],i;

   printf("Enter the numbers:");
   for (i = 0; i <n; i++)
      scanf("%d", &arr[i]);
   int min=arr[0],p=0,ne=0,z=0;
   for (i=0;i<n;i++)
      {
      	if(arr[i]>0)
      	p+=1;
      	else if(arr[i]<0)
      	ne+=1;
      	else
      	z+=1;
      	if(arr[i]<min)
      	min=arr[i];
	  }
  
  if(min>0)
  {
    printf("Positive:%d Negative:%d Zeroes:%d The number to be added to make it positive is equal to :0",p,ne,z);
}
  if(min<0)
  {
    printf("Positive:%d Negative:%d Zeroes:%d The number to be added to make it positive is equal to :%d",p,ne,z,min);
}
   return 0;
}
