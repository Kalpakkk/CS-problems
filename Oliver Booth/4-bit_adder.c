/*
 * update function to only one function and use struct to give sum and carry generated
 */

#include <stdio.h>

bool sum_two_binary(bool a, bool b, bool c);
bool carry_generated(bool a, bool b, bool c);

int main()
{
	bool bin1[4] = {false, true, false, false};
	bool bin2[4] = {false, true, false, false};
	bool res[4] = {};

	bool carry_status=false;

	int n = 4;
	for(int i=n-1;i>=0;i--)
	{
		res[n-i]=sum_two_binary(bin1[i],bin2[i],carry_status);

		carry_status = carry_generated(bin1[i],bin2[i],carry_status);
		printf("%d %d %d %d      OV=%d\n", res[3], res[2], res[1], res[0],carry_status);


	}

	if(carry_status)
		printf("buffer overflow");
	printf("%d %d %d %d", res[3], res[2], res[1], res[0]);
}

bool sum_two_binary(bool a, bool b,bool c)
{
	if(c)
	{
		if(a&&b)
			return true;
		if(!a&&!c)
			return true;

	}
	else{
		if(b){
			if(c)
				return false;
			else
				return true;
		}

	}



}

bool carry_generated(bool a, bool b,bool c)
{
	if(a)
	{
		if(b || c)
			return true;
	}
	else if(b&&c)
	{
		return true;
	}
	else{
		return false;
	}
}
