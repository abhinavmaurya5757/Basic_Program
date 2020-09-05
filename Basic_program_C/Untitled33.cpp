#include<stdio.h>
int main()
{
	int sum=0;
	int i;
	int m,n;
	printf("Enter the number m and n");
	scanf("%d %d",&m,&n);
	i=m+1;
	while(i<n)
	{
		sum=sum+i;			
		i=i+1;
	}
	printf("%d",sum);
	
	return 0;
}
