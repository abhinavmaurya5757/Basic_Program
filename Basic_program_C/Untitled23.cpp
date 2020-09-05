#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the two numbers");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("The two numbers after swapping are %d %d",a,b);
}
