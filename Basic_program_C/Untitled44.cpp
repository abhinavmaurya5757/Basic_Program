    #include<stdio.h>  
     int main()    
    {    
    int n,r,sum=0,x;    
    printf("enter the number=");    
    scanf("%d",&n);    
    x=n;    
    while(n>0)    
    {    
    r=n%10;    
    sum=sum+(r*r*r);    
    n=n/10;    
    }    
    if(x==sum)    
    printf("armstrong  number ");    
    else    
    printf("not armstrong number");    
    return 0;  
    }   
