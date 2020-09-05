#include <stdio.h> 
int main() 
{ 
   int x;
   int a,b,n,r,y;
   printf("Enter the operation \n 1.Sum of digits \n 2.Reverse of the number \n 3.Pallindrome or not");
   scanf("%d",&a);
   printf("Enter the number");
   scanf("%d",&n);
   switch (a) 
   { 
    case 1:  
    while(n>0) 
	 {
      r=n%10;
      n=n/10;
      y=y+r;
      
  }
  printf("The reverse of the number is %d",y); 
               break;
		

  
   
    case 2: 	
	while(n>0)
  {
      r=n%10;
      n=n/10;
      y=y*10+r;
      
  }
  printf("The reverse of the number is %d",y); 
               break;
    case 3: 
	while(n>0)
  {
      r=n%10;
      n=n/10;
      y=y*10+r;
      
  }
  if(y==n)
  printf("%d is a pallindrome",y); 
               
	else
        printf("%d is a not a pallindrome",n); 
          break;
   } 
   return 0;
}
