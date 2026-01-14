#include <stdio.h>

void fib(int n)
{
	long long  result=0,a=0,b=1;
	for(int i=0;i<n;i++)
	{
		if(a%3==0||a%5==0)
		{
			if(a%3==0)
				printf("Fizz");
			if(a%5==0)
				printf("Buzz");
		}
		else
			printf(" %lld ",a);
		result=a+b;
		b=a;
		a=result;
		printf("\n");
	}
	
}


int main()
{
	int n = 50;
	fib(n);
	return 0;
}

