#include<stdio.h>
int main()
{
int a;
float x,y,z;
char c;
int k;
printf("Enter the operation you want to do");
scanf("%c",&c);
printf("Enter the numbers you want to perform this operation on");

	if(c==43)
	{
		scanf("%f %f",&x,&y);
		z=x+y;
		printf("%f",z);
	}	
	if(c==45)
	{
		scanf("%f %f",&x,&y);
		z=x-y;
			if(z>0)
			printf("%f",z);
			else
			printf("Number will come out to be Negative");
	}
	if(c==47)
	{
		scanf("%f %f",&x,&y);
		k=x/y;
			if(y==0)
			printf("Invalid Operation");
			else
			printf("%d",k);
	}
	if(c==42)
	{
		scanf("%f %f",&x,&y);
		z=x*y;
		printf("%f",z);
			
	}
	return 0;
}
