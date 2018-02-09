#include<stdio.h>
#include<conio.h>
int main()
{
	int a,n,count=0;
  printf("%d",count);
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		count++;
		n=n/10;
	}
	return 0;
 
