#include<stdio.h>
int main() 
	{
  char ch[100];
  printf("Enter the string: ");
  scanf("%s",ch);
  int  i=0;
  while(ch[i]!='\0')
  {
  	printf("%c",ch[i]);
  	i++;
  	printf("\n");
  }
 
   return 0;
}
