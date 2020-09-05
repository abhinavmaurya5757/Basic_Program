#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter a 4 digit number");
	scanf("%d",&a);
	b=a/1000;
	c=a/100-(b*10);
	d=a/10-(b*100)-(c*10);	
	e=a-(1000*b)-(100*c)-(10*d);
	f=b+10*c+100*d+1000*e;
	printf("the reversed number is %d",f);
	return 0;
	}
