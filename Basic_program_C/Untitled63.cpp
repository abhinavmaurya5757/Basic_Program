#include<stdio.h>
int main() 
	{
   int j,i,m,n;
  printf("Enter the size of the matrix:");
  scanf("%d %d",&m,&n);
  int a[m][n];
   for (i = 0; i <m; i++)
    {
    for (j= 0; j<n; i++)
      scanf("%d",&a[i][j]);
	}
 	
  for (i = 0; i <m; i++)
    {
    for (j= 0; j<n; i++)
      printf("%d", a[j][i]);
      printf("\n");
	}
 	
  
 
   return 0;
}
