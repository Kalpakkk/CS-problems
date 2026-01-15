#include <stdio.h>

// 42069  should output forty-two thousand and sixty-nine
/* 1 then depend on front one = ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen,seventeen,eighteen,nineteen, 
 * 2 then twenty then just 0 skip with hyphen{1,2,3,4,5,6,7,8,9} in words
 * same for all 9
 *
 *
 * divide it into three block from last index
 * then convert those three blocks to words
 * add the string while adding the thousands,millions at the end when you move up
 * 
 */
void in_words(int n)
{
	int arr[5] = {0};
	int num[10][10] = {"one","two","three","four","five","six","seven","eight","nine"};
	for(int i=4;i>=0;i--)
	{
		arr[i]=n%10;
		n -= n%10;
		n = n/10;
	}



}

int main()
{
	int n = 42069;
	in_words(n);
	return 0;
}
