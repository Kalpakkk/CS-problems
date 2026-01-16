#include <stdio.h>

/*
 * count of 10 not required we are gettint it by only 2 and 5 
 *
 * always assumption 2 will be more than 5 as it comes 3 time when first five occurrs
 * thats why asnwer depend only on 5
 */

int count_two(int n);
int count_five(int n);
int count_ten(int n);

int total_two=0, total_five=0, total_ten = 0;


int main()
{
	int number = 21;

	for(int n=number;n>0;n--)
	{
		total_five+= count_five(n);
	}
	printf("Total number of trailing zeroes: %d ", total_five);
	return 0;
}

int count_two(int n)
{
	int count=0;
	while(n%2==0)
	{
		count+=1;
		n=n/2;
	}
	return count;
}

int count_five(int n)
{
	int count=0;
	while(n%5==0)
	{
		count+=1;
		n=n/5;
	}
	return count;
}

int count_ten(int n)
{
	int count=0;
	while(n%10==0)
	{
		count+=1;
		n=n/10;
	}
	return count;
}


