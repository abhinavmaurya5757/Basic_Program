#include<stdio.h>
main()
{int x[10][10],y[10][10],a,b,c,d,e,f,g;
printf("Enter the number of Rows and Columns of first Matrix");
scanf("%d%d",&a,&b);
printf("Enter the number of Rows and Columns of second Matrix");
scanf("%d%d",&c,&d);
printf("Enter Elements of first matrix");
for(e=0;e<a;e++)

for(f=0;f<b;f++)
{scanf("%d",&x[e][f]);
}
printf("Enter Elements of Second Matrix");
for(e=0;e<c;e++)
for(f=0;f<d;f++)
{
scanf("%d",y[e][f]);
}if(a==d)
{
for(e=0;e<a;e++)
for(f=0;f<d;f++)
{g=x[c][d]*y[c][d];
}printf("product");
for(e=0;e<a;e++)
{
for(f=0;f<d;f++)
printf("%d\t",g);
printf("\n");
}}
else
{printf("Multiplication is not possible");
}}
