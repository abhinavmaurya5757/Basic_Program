#include<stdio.h>
int main()
{
	int multiply=1;
	int i=1;
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<11)
	{
		multiply=n*i;
		printf("%d \n",multiply);
		multiply=1;
		i=i+1;
	}
	
	return 0;
}
