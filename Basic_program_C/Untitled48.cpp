#include <stdio.h> 
int main() 
{ 
   char x;
   int a,b;
   printf("Enter the operation and the two numbers");
   scanf("%d %c %d",&a,&x,&b);
   switch (x) 
   { 
    case '+': printf("%d",a+b); 
               break; 
    case '-': printf("%d",a-b); 
               break;
    case '*': printf("%d",a*b); 
               break;
	case '/': printf("%d",a/b); 
               break;
        
          
   } 
   return 0; 
}   
