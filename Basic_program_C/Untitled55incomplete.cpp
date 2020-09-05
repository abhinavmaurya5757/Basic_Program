#include<stdio.h>
	
	int main()
	{
		int n;
		int i,r,pos=0;
		printf("Enter the size of the sorted array");
		scanf("%d",&n);
		printf("Enter the sorted array");
		int ar[n+1];
		int ar[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);
		}
		printf("Enter the element to be inserted in the array");
		scanf("%d",r)
		for(i=0;i<n-1;i++)
		{	if(ar[0]>r)
			{
			pos=0;
			break;
			}	
			if(i!=n-1)	
				{
					if(ar[i]<=r&&ar[i+1]>=r)
					{
						pos=i+1;
						break;
					}
					
				}
			else
			{
				pos=n-1;
			}
		}
		for(i=pos;i<n+1;i++)
		{
			if(i!=n+1)
			{
				
			}
		}
		return 0;
	}
