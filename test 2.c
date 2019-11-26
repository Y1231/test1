#include <stdio.h>

int Fibonacci(int x)
{
	if(x==1)
	return 1;
	if(x==2)
	return 1;
	return Fibonacci(x-1)+Fibonacci(x-2);
}
void main()
{
	int num;
	printf("please input a number:");
	scanf("%d",&num);
	int y=Fibonacci(num);
	printf("%d\n",y);
}
	
	
