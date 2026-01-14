#include <stdio.h>



void fib(int n)
{
	int result=0;
	int a =0;
	int b=1;
	for(int i=0;i<n;i++)
	{
		printf(" %d ",a);
		result=a+b;
		b=a;
		a=result;
	}
	
}


int main()
{
	int n = 10;
	fib(n);
	return 0;
}

