#include<stdiop.h>
#include<conio.h>
{
n=input("enter n value\n")
sdd=[]
for i in range(0,n):
	b=int(input())
	sdd.append(b)
sdd.sort()
if(n%2 != 0):
	print(sdd[(n/2)])
else:
	s=n/2
	c=(int(sdd[s])+int(sdd[s-1]))/2
	print(c)
  getch();
  }
