#include<stdio.h>
int main()
{
  int n,v=0,d=0,r,i;
  char ar[1000];
  for(i=0;i<1000;i++)
  {
  	scanf("%c",&ar[i]);
  	if(ar[i]>=58&&ar[i]<=64)  // ; : < > = ? @
  	  {
  		break;
	  }
  
	if(ar[i]=='a'||ar[i]=='e'||ar[i]=='i'||ar[i]=='o'||ar[i]=='u')
  	  {  
  		v=v+1;
	  }
	
	if(ar[i]=='A'||ar[i]=='E'||ar[i]=='I'||ar[i]=='O'||ar[i]=='U')
  	  {
  		v=v+1;
	  }
	  
	if(ar[i]>47&&ar[i]<58)
	  {
	  	d=d+1;
  	  }
}
printf("The counts of vowels and digits respectively are %d %d",v,d);
  return 0;
}

