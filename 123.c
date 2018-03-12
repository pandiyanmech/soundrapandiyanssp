#include <stdio.h>
#include<conio.h>
int main() 
{
	int a[1000],i,j,t,l;
	scanf("%d",&l);
	for(i=0;i<l;i++)
	scanf("%d",&a[i]);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(a[i]>a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			 }
			
		}
	}
	printf("%d\t",a[l%2]);
  getch();
  return();
  }
