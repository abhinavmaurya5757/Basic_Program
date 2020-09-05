#include<stdio.h>
int main()
{
	int n,x,y,r=0,i,a;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the array\n");
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the element number that you want reversed\n");
		scanf("%d",&a);
	x=ar[a-1];
		
		while(x!=0)
		{	y=x%10;
			r=10*r+y;
			x/=10;
		}
		
	
	printf("%d",r);
  return 0;
}

