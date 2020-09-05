    #include <stdio.h>
    int main()
    {
        int n, i, flag = 0,j,k=0;
        printf("Enter n");
        scanf("%d", &n);
        for (i=2;i<100000;i++)
		{	flag=0;
		if(k==n)
		{
			break;
		}
		
		for(j=2; j<i;j++)
        {
            
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
         }
       
            if (flag == 0)
              {printf("%d ", i);
        	k=k+1;
		}
              
       
    }
        return 0;
    }
