#include<stdio.h>
int main()
{
num=int(input())
if num>1:
	for i in range(2,num):
		if(num%i==0):
			print(num,"the number is not prime")
			break
	else:
			print(num,"the number is  prime")
return 0;
}
