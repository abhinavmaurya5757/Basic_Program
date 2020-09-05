    #include <stdio.h>
    int main()
    {
        int n, i, flag = 0,m,j;
        printf("Enter n and m");
        scanf("%d %d", &n,&m);
        for (i=n+1;i<m;i++)
		{	flag=0;
		for(j=2; j<i;j++)
        {
            
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
         }
       
            if (flag == 0)
              printf("%d ", i);
            
              
       
    }
        return 0;
    }
