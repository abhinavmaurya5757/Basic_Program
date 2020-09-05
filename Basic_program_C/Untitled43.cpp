    #include <stdio.h>
    int main()
    {
        int n, i, m;
        printf("Enter m and n");
        scanf("%d %d",&m ,&n);
        printf("The leap years are: ")
        for(i= m+1; i<n;i++)
        {
            
            if(i%4 == 0)
            {
                printf("%d ",i);
                
            }
        }
        
        return 0;
    }
