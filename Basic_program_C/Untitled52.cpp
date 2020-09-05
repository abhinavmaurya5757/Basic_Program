#include<stdio.h>
int main()
{
	int n;
	int i,flag=0;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the array");
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(int x=0;x<=n/2;x++)
	{
		if(ar[x]!=ar[n-1-x])
		{
			flag==1;
			break;
		}
	}
	if(flag==1)
	printf("Not a Pallindrome");
	else
	printf("Pallindrome");
	
	return 0;
}
