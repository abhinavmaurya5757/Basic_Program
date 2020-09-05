#include<stdio.h>
int main()
{
	int fac=1;
	int i=2;
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		fac=fac*i;			
		i=i+1;
	}
	printf("%d",fac);
	
	return 0;
}
