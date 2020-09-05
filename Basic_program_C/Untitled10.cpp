#include<stdio.h>
main()
{

int a,b;
printf("Enter the two numbers");
scanf("%d %d",&a , &b);
a=a+b;
b=a-b;
a=a-b;
printf("The numbers after swapping are %d %d",a,b);
}
