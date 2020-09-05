#include <stdio.h> 
#include<math.h>
int main() 
{ 
   int x;
   int a,b=1,n,r,y,i,flag=0,temp,digits=0,sum=0;
   printf("Enter the operation \n 1.Factorial of a number \n 2.Number prime or not \n 3.Armstrong number or not \n 4.Even or odd");
   scanf("%d",&a);
   printf("Enter the number");
   scanf("%d",&n);
   switch (a) 
   { 
    case 1:  
    	for(i=1;i<=n;i++)
    	{
    		b=b*i;
    	}
    	printf("%d",b);
  	break;
   
    case 2: 	
for(i = 2; i <= n/2; ++i)
        {
            
            if(n%i == 0)
            {
                flag = 1;
                break;
            }
        }
       
            if (flag == 0)
              printf("%d is a prime number.", n);
            else
              printf("%d is not a prime number.", n);
              break;
    case 3: 
	temp = n;
  
   while (temp != 0) 
   {
      digits++;
      temp = temp/10;
   }
   
   temp = n;
   
   while (temp != 0) {
      r = temp%10;
      sum = sum + pow(r, digits);
      temp = temp/10;
   }
 
   if (n == sum)
      printf("Armstrong number\n", n);
   else
      printf("Not an Armstrong number\n", n);
 		break;
    
    case 4:
    	if(n%2==0)
    	printf("Even Number");
    	else
    	printf("Odd Number");
   break;
   }
    
   return 0;
}
