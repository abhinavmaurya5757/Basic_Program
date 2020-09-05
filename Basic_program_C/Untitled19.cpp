#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the two numbers");
	scanf("%d %d",&a,&b);
	if(a>b)
	printf("%d is greater than %d",a,b);
	else if(a<b)
	printf("%d is greater than %d",b,a);
	else
	printf("Both the number are equal");
}
