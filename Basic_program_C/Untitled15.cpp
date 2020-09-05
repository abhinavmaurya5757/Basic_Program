#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter the marks in five sujects");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	printf("The average is %d",f);
	if(f>50)
	{printf("\n\nPassed");
	}
	else{
	printf("\nFailed");
	}
	
	return 0;
	}
