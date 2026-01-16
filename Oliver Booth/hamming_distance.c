#include <stdio.h>

typedef struct {
	bool value[5];
} Array;

Array decode_to_binary(int a);
void print_array(Array a);

int hamming_distance(Array bin1,Array bin2);
int n = 5;

int main()
{
	Array a = decode_to_binary(6);
	Array b = decode_to_binary(5);
	print_array(a);
	printf("\n");
	print_array(b);
	printf("\n");

	printf("\n %d\n",hamming_distance(a,b));
	return 0;
}

void print_array(Array a)
{
	for(int i=n-1;i>=0;i--)
		printf(" %d ", a.value[i]);
}

Array decode_to_binary(int a)
{
	int to_divide=a;
	Array to_return;
	
	for(int i=n-1;i>=0;i--)
	{
		if (to_divide%2==0)
			to_return.value[i]==true;
		else
			to_return.value[i]==false;
	to_divide = to_divide/2;
	}
	return to_return; 
}

int hamming_distance(Array bin1,Array bin2)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(bin1.value[i]!=bin2.value[i])
			count+=1;
	}
	return count;

}
