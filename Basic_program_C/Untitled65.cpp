#include<stdio.h>
	
	int main()
	{
		int count=0,i;
		
		printf("Enter the string: ");
		char w[200];
		scanf("%s",w);
			for(i=0;i<200;i++)
		{
			if(w[i]!='\0')
			count+=1;
			else 
			break;
		}

			printf("Length of the string is: %d",count);
		return 0;
	}
