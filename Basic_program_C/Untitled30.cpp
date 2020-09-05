#include<stdio.h>
int main()
{
	int sum=0;
	int i=1;
	int n;
	printf("Enter the number n");
	scanf("%d",&n);
	while(i<n)
	{
		sum=sum+i;
		i=i+2;
				
	}
	printf("%d",sum);
	return 0;
}
