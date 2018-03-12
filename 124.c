#include<stdio.h>
#include<conio.h>
int main(void)
{
	char a[100];
	scanf("%s",a);
	int n,i,flag;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>=0&&a[i]<=9)
		flag=1;
		else
		{
			flag=0;
			printf("No");
			break;
		}
	}
	if(flag==1)
	printf("Yes");
  getch();
  return();
}
