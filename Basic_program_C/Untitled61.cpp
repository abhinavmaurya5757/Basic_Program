#include<stdio.h>
int main() 
	{
	int m,n,i,j;
	printf("Enter the size of the array: ");
	scanf("%d %d",&m,&n);
   int a[m][n],b[m][n],c[m][n];

   printf("Enter the numbers of first and second array:");
   for(i = 0; i <m; i++)
    for (j= 0; j<n; j++)
      scanf("%d", &a[i][j]);
   for(i = 0; i <m; i++)
    for (j= 0; j<n; j++)
      scanf("%d", &b[i][j]);
  for(i = 0; i <m; i++)
    for (j= 0; j<n; j++)
      c[i][j]=b[i][j]+a[i][j];
 
	  printf("The summed up final array is equal to:\n");
	for(i = 0; i <m; i++)
    {
	for (j= 0; j<n; j++)
     scanf("%d %d",a[i][j]);
	printf("\n");
	}
   return 0;
}
