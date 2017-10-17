/*
10 이하의 소수를 모두 더하면 2 + 3 + 5 + 7 = 17 이 됩니다.

이백만(2,000,000) 이하 소수의 합은 얼마입니까?
*/

#include <stdio.h>
#include <iostream>

using namespace std;

_Longlong Number = 2000000;
_Longlong PrimeSum(int MaxNumber);

int main(void)
{
	cout << PrimeSum(Number) << endl;

	return 0;
}

_Longlong PrimeSum(int MaxNumber)
{
	if (MaxNumber < 2) return 0;

	_Longlong sum = 2;

	bool* Prime = new bool[MaxNumber + 1];

	for (int i = 0; i < MaxNumber; ++i)
	{
		Prime[i] = true;
	}

	for (int i = 3; i < MaxNumber; i += 2)
	{
		if (Prime[i] == true)
		{
			sum += i;
			for (int k = i + i; k < MaxNumber; k += i)
			{
				Prime[k] = false;
			}
		}
		else
		{
			continue;
		}
	}

	return sum;

}