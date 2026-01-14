#include <stdio.h>



void fib(int n)
{
	int result=0;
	int a =0;
	int b=1;
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
			printf(" %d ",a);
		result=a+b;
		b=a;
		a=result;
		printf("\n");
	}
	
}


int main()
{
	int n = 10;
	fib(n);
	return 0;
}

