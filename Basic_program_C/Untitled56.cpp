#include<stdio.h>
int main() 
{
   int i, j, k, s;
 
   printf("Enter size of the array:");
   scanf("%d", &s);
   int ar[s];
   printf("Enter the elements of the array :");
   for (i = 0; i < s; i++)
      scanf("%d", &ar[i]);
 
   
   for (i=0;i<s;i++) 
   {
      for (j=i+1;j<s;) 
	{
         if (ar[j]==ar[i]) 
		 {
            for (k=j;k<s;k++) 
			{
               ar[k]=ar[k + 1];
            }
            s--;
         }
		 else
         j++;
    }	
   }
 	printf("\n");
   for (i=0;i<s;i++) 
   {
      printf("%d ",ar[i]);
   }
 
   return 0;
}
