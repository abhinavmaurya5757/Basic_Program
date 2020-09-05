#include<stdio.h>
	
	int main()
	{
		int count=0,count2=0,i,k,flag,j,temp=0;
		char sen[200];
		printf("Enter the sentence: ");
		scanf("%[^\n]",sen);
		for(i=0;i<200;i++)
		{
			if(sen[i]!='\0')
			count+=1;
			else 
			break;
		}
		
		printf("Enter the word you want to search: ");
		char w[20];
		scanf("%s",w);
			for(i=0;i<200;i++)
		{
			if(sen[i]!='\0')
			count2+=1;
			else 
			break;
		}
	for(i=0;i<count-count2;i++)
		{	k=i;
			flag=0;
			for(j=0;j<count2;j++)
				{
					if(sen[k]==w[j])	
					{
						
					}
					else 
					{
					flag=1;
					break;
					}	
					k++;
				}			
			if(flag==0)
			{
				printf("Yes the word is present in the string");
				temp=1;
				break;
				
			}
			
		}
	
		if(temp==1)
			printf("No the word is not present in the string");
		return 0;
	}
